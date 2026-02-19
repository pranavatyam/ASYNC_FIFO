What did I build?
Implemented a parameterized synchronous counter in SystemVerilog.
- Uses always_ff
- Active-low asynchronous reset
- Optional enable input
- Simulated with Verilator

         +---------+
 clk --->| FlipFlop|---+
         +---------+   |
                       +--> +1 --> mux(en) --> next D


What did I learn?
- Registers update only on posedge clk
- Reset overrides normal behavior
- Nonblocking assignments (<=) model flip-flops
- Simulation time advances with clock edges
- State holds when enable is low

How it works?
The counter is implemented using WIDTH flip-flops.
On each rising edge:
- If rst_n=0 → count resets to 0
- Else if en=1 → count increments
- Else → count retains value



Next: Implement a 2-state FSM to understand state transitions.
