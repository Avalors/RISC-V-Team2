# Personal Statement: Elson Tho

**Name:** Elson Tho  

**CID:** 02381489 

**Github username:** 3lson  

## Summary

- I was responsible for the **ALU**, **Control Unit**, **RegisterFile**, and **InstrMem** modules and writing the respective **testbenches** for them
- I was also responsible to doing the testbenching for the **cache** and **branch prediction** modules
- I was in charge of implementing the **complete RV32I instruction set** and did testbenching with assembly codes for every instruction. 

- I was responsible for team debugging both in person and online using the VS Code Live Share feature. This allowed me to directly contribute by editing code on my teammates' IDEs during collaboration sessions, although some commits were made by them.

## Contributions

### Lab 4

- [RegisterFile, ALU, and MUX done](https://github.com/aa6dcc/RISC-V-Team2/commit/c84f24871c5a7911610828e2e62cf69224e74bcf)
- [Added controlunit](https://github.com/aa6dcc/RISC-V-Team2/commit/5fa1a412a6342c5cc21ca651c8444c2814a2f9e5)
- [Restructure folder](https://github.com/aa6dcc/RISC-V-Team2/commit/f9f399da2d43315a25bb588428c69cf0d946753d)
- [Fixed the control unit testbench and brought in the new doit.sh script](https://github.com/aa6dcc/RISC-V-Team2/commit/5773432255b8a4a536ed3b52fe3cfc900075aa9f)
- [Added .gitignore to ignore large files and gave our team merge conflicts](https://github.com/aa6dcc/RISC-V-Team2/commit/9af8479508d7274a99b07ba0c5b31bc86df42bb3)
- [Worked on Antoine's Liveshare of VSCode as a team for debugging and testbenching](https://github.com/aa6dcc/RISC-V-Team2/commit/e3fd87fdfd4d9f00b7447949e95964d28db9bb20#diff-9b9a6efe51731ef72a27f44c26c78fb4b1e55f3e88676bf0140041f7af99e2ee): For more detail and evidence see [Team Log (27/11)](../logbooks/team_log.md#team-meetup-27-11).
- [](https://github.com/aa6dcc/RISC-V-Team2/commit/edc939dadaaca6523c7ef921765ea0f2ed3c03f0): For more detail and evidence see [Team Log (30/11)](../logbooks/team_log.md#team-meetup-30-11).

### Single-Cycle

- [F1Lights asm code and testbench foundation](https://github.com/aa6dcc/RISC-V-Team2/commit/0a6c948daec468a1f3c2d683eaa48e9bb5bda528
- [Completed F1Light verification and Vbuddy simulation](https://github.com/aa6dcc/RISC-V-Team2/commit/1a246636d7341bde9bddb56b764e818dfad377fd)
- [Added graphs.py to just illustrate our expected graphs for pdf](https://github.com/aa6dcc/RISC-V-Team2/commit/7ad78983211d06f3bb87f3062504e860277b382c)
- [PDF fully tested with data/.mem files](https://github.com/aa6dcc/RISC-V-Team2/commit/bd1db301e6254e29d24291ed513287c550939ff7)
- [Added all R-type instr and verification, added the rest of I, J, U, B in controlunit](https://github.com/aa6dcc/RISC-V-Team2/commit/5eccb99f8b08752ab7b98ed65e42157b3a14a190)
- [Completed full RV32I instructions and testbench and asm code for verification](https://github.com/aa6dcc/RISC-V-Team2/commit/14e4e17063317b12e1dfb36917cbb79eb7aec45a)


### Pipeline

- [Pipelining registers implemented and started the hazard unit](https://github.com/aa6dcc/RISC-V-Team2/commit/34617373aca98c16134c2862ff86bcb8c228c509)
- [Added WR3Src signal into pipeline](https://github.com/aa6dcc/RISC-V-Team2/commit/47a367c96ebce4d240b61f4a011d2dea61e3c596)
- [Fixed minor signals spelling bugs: still not functional
](https://github.com/aa6dcc/RISC-V-Team2/commit/d3df6d10afd85b6dbf4cccfc0d6f6bc7fa467649)


### Cache

Here I worked on a initial testing branch for cache branched from Single-Cycle whilst pipeline was still in development. Then I synced the cache modules to be integrated into the full pipeline RV32I

- [Edited direct mapped cache.sv, added testbenches and asm code for testing](https://github.com/aa6dcc/RISC-V-Team2/commit/7a61fd2918b27e52af0d4cc86411fd7ff472ffdd)
- [Direct-mapped cache completed](https://github.com/aa6dcc/RISC-V-Team2/commit/ca013aad029b479c8335ec7aebd2990b17f65c63)
- [Completed branch prediction testbench and tested: Works as individual module](https://github.com/aa6dcc/RISC-V-Team2/commit/86b56e701d798e3d486f71c5a5f6acf23f11edd5)
- [Merged full pipeline RV32I onto DM cache and tested a TW cache: TW cache not completely successful yet
](https://github.com/aa6dcc/RISC-V-Team2/commit/c118a1d49282d4a143e912e7bd6a1d6fee3edfa4)


## What I learned

This project has given me the opportunity to learn HDL, SystemVerilog, RISCV-I ISA, and to create a framework for testing.

Working on verification and debugging using gtkwave was something I found really useful to understanding where the underlying issue might be coming from that was giving us the incorrect output. 

Communication as a team was really important and we met each other consistently both online and in-person making it easy to give regular updates and help each other on any challenges we faced.


## Mistakes I made

One mistake was not implementing the RET instruction properly in the control unit leading to extensive debugging of JALR functionality which Ahmed (@Avalors) had to help fix 
[pdf fixes: added JALR functionality, RET fix and PC + 4 store for J-type instructions](https://github.com/aa6dcc/RISC-V-Team2/commit/7f4978e6a998b1457e97a4bbc045055ee32e84be)
- This would probably have been resolved with clear discussion of the necessary instructions needed to test the respective functionalities as control unit I made was designed for Lab 4 Counter and F1 Lights which did not require JALR and therefore was loosely implemented in the control unit - but I should have added clear comments that it was not fully implemented yet


## What I would do differently

- Investigate more use of the co-authoring function on GitHub for clearer contribution tracking.
- Using squashed commits so we can still commit without affecting the main branch history.
- We should have used tags instead of branches for our different versions but branches might have worked for us based on the delegation of our work in doing pipeline whilst someone else works on cache and further enhancements 



