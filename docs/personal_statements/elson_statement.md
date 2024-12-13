# Personal Statement: Elson Tho

**Name:** Elson Tho  
**CID:** 02381489 
**Github username:** 3lson  

## Summary

- I was responsible for the **ALU**, **Control Unit**, **RegisterFile**, and **InstrMem** modules and writing the respective **testbenches** for them
- I was also responsible to doing the testbenching for the **cache** and **branch prediction** modules
- I was in charge of implementing the **complete RV32I instruction set** and did testbenching with assembly codes for every instruction. 

- I was responsible for team debugging both in person and online using the VS Code Live Share feature. This allowed me to directly contribute by editing code on my teammates' IDEs during collaboration sessions, although some commits were made by them.

[Contributions](#contributions)

## Contributions

The evidence for the [summary](#summary) section is linked below.

| Activity           | Link
| ------------------ |-----------------------------------------------------
| Writing Tests      | [Example](https://github.com/booth-algo/RISC-V-T24/pull/20) 
| Code Review        | [Example](https://github.com/booth-algo/RISC-V-T24/pull/8)  
| Refactoring        | [Example](https://github.com/booth-algo/RISC-V-T24/commit/7d7c6236a89176b0b1c39986e936943954aca37e)  
| Pipeline Debugging | [Example](https://github.com/booth-algo/RISC-V-T24/commit/3b5122d68dd4ef15d340c3e45828db638e97da53)  

I also worked on the RTL, primarily after Lab4. Here are some of my main 
contributions:

### General

- Introduced the use of branches and tagging to the team.
- [Introduced CI (GitHub Actions).](https://github.com/booth-algo/RISC-V-T24/commit/e54ccb36dd0e178ce7d2d33e432cf981efefee37).
- [Created industry standard testing (GTest).](https://github.com/booth-algo/RISC-V-T24/commit/a2b177139707acfb482ee30f0e28641d65d4e017).
  Once again, I encourage checking the [`test folder`](../../tb/test/)
- Pipelined the testing process through bash scripting
  [doit.sh](https://github.com/booth-algo/RISC-V-T24/commit/3c00492c35f810ab3cbe71c34fc84aca1d494801),
  [compile.sh](https://github.com/booth-algo/RISC-V-T24/commit/e61392896bef151a95739cd8ffe378ef269152c2)

From this point, I will **not** focus on the testbench commits, but rather RTL 
work, for I have said enough. 

(Please check it out [here](../../tb), if you haven't already!)

### Lab 4

- [RegisterFile, ALU, and MUX done](https://github.com/aa6dcc/RISC-V-Team2/commit/c84f24871c5a7911610828e2e62cf69224e74bcf)
- [Added controlunit](https://github.com/aa6dcc/RISC-V-Team2/commit/5fa1a412a6342c5cc21ca651c8444c2814a2f9e5)
- [Restructure folder](https://github.com/aa6dcc/RISC-V-Team2/commit/f9f399da2d43315a25bb588428c69cf0d946753d)
- [Fixed the control unit testbench and brought in the new doit.sh script](https://github.com/aa6dcc/RISC-V-Team2/commit/5773432255b8a4a536ed3b52fe3cfc900075aa9f)
- [Added .gitignore to ignore large files and gave our team merge conflicts](https://github.com/aa6dcc/RISC-V-Team2/commit/9af8479508d7274a99b07ba0c5b31bc86df42bb3)
- [Worked on Antoine's Liveshare of VSCode as a team for debugging and testbenching](https://github.com/aa6dcc/RISC-V-Team2/commit/e3fd87fdfd4d9f00b7447949e95964d28db9bb20#diff-9b9a6efe51731ef72a27f44c26c78fb4b1e55f3e88676bf0140041f7af99e2ee): For more detail and evidence see [Team Log (27/11)](../logbooks/team_log.md#team-meetup-27-11).

### Single-Cycle



### Pipeline



### Cache



## Special Design Decisions



## What I learned

Whilst I did not come into this project empty-handed, I believe that this 
project has been really useful in consolidating my technical skills. I also
got the opportunity to learn a hardware description language, SystemVerilog,
and the RISCV-I ISA.

Working on verification was extremely fun in this environment, in which there
was no *real* pressure to catch every single bug that could slip into 
production. Nevertheless, I persisted and learnt a lot about every aspect of 
the CPU, as it was necessary for me to write well-calibrated 
[tests](../../tb/c/) for every nuance and edge case of the CPU.


## Mistakes I made

> "The only real mistake is the one from which we learn nothing" - Henry Ford

From a technical POV, there were a *lot* of edge cases they were not caught out 
by the integration tests. For example, here's a case study:

**Case Study**: Cache edge case  
**Test**: [`027-pdf_up_down.c`](../../tb/c/027-pdf_up_down.c)  
**Fixed**: [#25](https://github.com/booth-algo/RISC-V-T24/pull/25)
(same as the commit above: "Solved the edge case of byte addressing").

The cache, before fixing, would pass every single test case that existed before
027 was written, even [`025-pdf.c`](../../tb/c/025-pdf.c). The need to address
this issue stemmed from the reference program looking *slightly* off.

However, even 027 exhibited strange behaviour with certain values. At the top of 
the file is this line of code:

```c
// ...
#define SIZE    256
```

The test will pass for values of `SIZE` small enough, such that there is no
need to fetch from main memory or certain values below (below 8).

```c
// ...
for (int ptr = 0; ptr < SIZE; ++ptr)
{
    dataArray[ptr] += 8;
}
```

This behaviour is due to overwriting bytes at the same time as a need to fetch
new data from main memory due to a tag change. The solution is clearly defined
in the RTL: [`dm_cache.sv`](../../rtl/dm_cache.sv).

In conclusion, the takeaway would be that I should have thought more clearly
about the possible edge cases before writing the tests, instead of jumping into
huge integration tests made of 100+ lines of assembly, which would have made the 
debugging easier.

## What I would do differently

- Used the co-authoring function on GitHub for clearer contribution tracking.
- Host formal weekly meetings. We saw each other a lot, but at times, team 
  members would be unaware of changes/responsibilities.
- Branch protected `main`, and squashed commits. This would allow freedom to
  commit as much as one want, without affecting the main branch history.
- Ensure everyone reads merge requests. This would have been super helpful, as
  it would have fixed the 2 problems listed directly above.


