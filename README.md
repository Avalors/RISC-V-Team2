# RISC-V-RV32I-Processor

This project was done as a team of 4.
We are team 2 (H.A.D.E.S), each with distinct roles for the coursework (we switched roles after lab 4):
  - Elson Tho: register file & testing own modules
  - Ahmed Hamid: control unit & testing own modules
  - Antoine Divet: ALU & testing own modules
  - Jihwan Shin: integration and testbenching


We will do pipelining, hazard control, cache and branch prediction as a team

## Team 2 Statement

| Antoine Divet (repo manager) | Elson Tho | Ahmed Hamid | Jihwan Shin |
|-|-|-|-|

## Quick Start

Note: before running **ANY** script (including the first time script), execute this 
command.

```bash
cd tb
```

### First Time

If you are using this for the first time, you need to install dependencies.

```bash
./install.sh
```

For wsl users, some packages may need to be installed, which can be found in [Bash Script instuctions](https://github.com/aa6dcc/RISC-V-Team2/blob/main/tb/bash_script_instructions.md)

## Logs

| Member    | Personal statement | Logbook |
|-----------|--------------------|---------|
| Antoine     | [Personal statement](docs/personal_statements/antoine_statement.md) | [Logbook](docs/logbooks/antoine_log.md) |
| Elson   | [Personal statement](docs/personal_statements/elson_statement.md) | [Logbook](docs/logbooks/elson_log.md) |
| Ahmed     | [Personal statement](docs/personal_statements/ahmed_statement.md) | [Logbook](docs/logbooks/ahmed_log.md) |
| Jihwan      | [Personal statement](docs/personal_statements/jihwan_statement.md) | [Logbook](docs/logbooks/jihwan_log.md) |


## Team Workflow

### Repo management (using `git`)

- The functions of `git` were fully utilised in this project
- `Branches` were created for implementations of different features to avoid 
  conflict and pushing faulty / poorly written code to `main`
- `Tags` were created for each completed version of the RV32I processor

### Repo organisation 

- [`docs`](docs/): logbooks, statements, references
- [`images`](images/): images for [`docs`](docs/)
- [`rtl`](rtl/): RV32I processor modules
- [`tb`](tb/): Testbench and scripts

### Workflow

- After `lab4`, modules / work were dynamically allocated to team members
- Team meetings, discussion and progress are logged in 
[`team_log.md`](docs/logbooks/team_log.md)
- All personal contributions and progress (such as debugging notes) are noted 
  down in personal logbooks in [`docs/logbooks`](docs/logbooks/)

## Working Evidence

Note: The following evidence was collected from running `tag v0.4.0`, the 
`direct-mapped cache` version of our code.

- If you want to check our [`testbenches`](tb/) 


## Team Contribution

- Work Contribution Table
- `x` (one x) refers to **a contribution**

|              |                               | Antoine | Elson | Ahmed | Jihwan |
| ------------ | ----------------------------- | ------------------ | ---------------- | ------------------------ | ---------------- |
| Lab 4        | Program Counter               |                  |                  | x                         |                  |
|              | ALU                           |  x                 |  x                |                        |                  |
|              | Register File                 |                    | x                 |                        |                  |
|              | Instruction Memory            |                    |                  |                          | x               |
|              | Control Unit                  |                    |                  |  x                        | x               |
|              | Sign Extend                   |                    |                  |                          |x               |
|              | Testbench                     |   x                 |                |                          |                  |
| Single Cycle | Data Memory                   |                    |                  |                         |                  |
|              | Program Counter               |                    |                  |   x                      |                  |
|              | ALU                           |   x                |                  |                          |                  |
|              | Register File                 |                    |    x             |                          |                  |
|              | Instruction Memory            |                    |                  |                          |    x             |
|              | Control Unit                  |                    |    x             |                          |                  |
|              | Sign Extend                   |                    |                  |                          |    x             |
|              | Doit.sh                       |   x                |                  |                          |                  |
