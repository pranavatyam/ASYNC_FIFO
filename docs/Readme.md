Asynchronous FIFO with APB Interface (SystemVerilog)

Overview:
This project implements a parameterizable asynchronous FIFO in SystemVerilog designed for safe data transfer between independent clock domains. The design follows industry-standard clock domain crossing (CDC) techniques and is verified using a self-checking randomized testbench with Verilator.

The long-term goal of this project is to integrate the FIFO behind an APB programming interface, enabling processor-controlled data movement in an SoC environment.

Project Goals:
- Implement a robust async FIFO using Gray-coded pointers
- Ensure CDC safety using multi-flop synchronizers
- Build a self-checking constrained-random testbench
- Verify full/empty behavior under asynchronous clocks
- Add APB wrapper for processor accessibility (next phase)
- Prepare design for real SoC-style integration

Key concepts demonstrated:
- Clock Domain Crossing (CDC)
- Gray code pointer synchronization
- Dual-clock FIFO architecture
- Two-flop synchronizers
- Constrained-random verification
- Scoreboard-based checking

Repo Structure: 

rtl/
  fifo_async.sv     # Asynchronous FIFO (main DUT)
  sync2ff.sv        # Two-flop synchronizer
  gray.sv           # Binary ↔ Gray conversion
  fifo_sync.sv      # Synchronous FIFO (reference)
  counter.sv        # Utility module
  updown_fsm.sv     # FSM example module

tb/
  tb_fifo_async.sv  # Self-checking async FIFO testbench
  tb_fifo_sync.sv
  tb_counter.sv
  tb_updown_fsm.sv

sim/




  