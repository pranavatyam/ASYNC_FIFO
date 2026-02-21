# ---- Tools ----
VERILATOR ?= verilator
SURFER    ?= surfer

# ---- Top TB ----
TB_TOP    := tb_apb_fifo_async

# ---- Files ----
RTL_SRCS  := rtl/sync2ff.sv rtl/fifo_async.sv rtl/apb_fifo_async.sv
TB_SRCS   := tb/tb_apb_fifo_async.sv
SRCS      := $(RTL_SRCS) $(TB_SRCS)

# ---- Outputs ----
OBJDIR    := obj_dir
EXE       := $(OBJDIR)/V$(TB_TOP)
VCD       := waves.vcd

.PHONY: all run waves clean help

all: run

# Build + run simulation (and produce waves.vcd)
run: $(EXE)
	@echo "== Running $(TB_TOP) =="
	./$(EXE)

# Build Verilator binary with VCD tracing enabled
$(EXE): $(SRCS)
	@echo "== Building with Verilator (VCD enabled) =="
	$(VERILATOR) -Wall --binary --trace --trace-structs \
	  --top-module $(TB_TOP) \
	  -o V$(TB_TOP) \
	  --Mdir $(OBJDIR) \
	  $(SRCS)
	@echo "== Build complete: $(EXE) =="

# Open the waveform in Surfer (auto-build + run first)
waves: run
	@echo "== Opening $(VCD) in Surfer =="
	$(SURFER) $(VCD)

clean:
	rm -rf $(OBJDIR) $(VCD)

help:
	@echo "Targets:"
	@echo "  make run    - build + run simulation"
	@echo "  make waves  - build + run + open waves.vcd in Surfer"
	@echo "  make clean  - remove build + waves"