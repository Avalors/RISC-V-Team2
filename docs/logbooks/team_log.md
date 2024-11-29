# Team Progress

This file will note down **major meetups** and breakdown the progress completed by those meetups. Note that only meetings with all 4 members present will be documented in this file.

## Lab meetup (14/11)
  - Discussed and allocated lab 4 parts to team members
    ![Alt text](../../images/topsv.png)
    This covers the role allocation for lab 4 only
    ![image](https://github.com/user-attachments/assets/4229391c-f2dd-4d15-9164-3958981c14b4)

  - Team goals:
    1. Lab 4 design
    2. Single cycle
    3. Pipeline
    4. Hazard detection, stall, flush
    5. Cache memory & branch prediction

## Lab meetup (21/11)
  - Lab 4 parts were mostly completed before the lab meetup
  - Some amendments were made such as amending the control unit and instruction memory files (Jihwan & Ahmed), whilst Elson and Antoine worked on role allocation and reformatting the repo. 
  - Main issues discussed during meeting:
    - In what order should do everything
    - Set a timeline
    - Split roles, set what should be done individually, what should be done collectively (namely pipelining, cache & branch prediction)
    - Start tracking logbooks for team meetings
    - Meet 3 times a week to keep the momentum going for the project
    - We decided to each individually test our own modules, Jihwan (in charge of the testbench) would mainly be focused on the integration for example.
    - In terms of role allocation:
        - Antoine: ALU
        - Elson: Register File
        - Ahmed: Control Unit
        - Jihwan: Integration and integrated testbenching

## Team meetup (27/11)
  - We met for several hours in order to debug our code, including the possibility of using gtkwave
  - We implemented modules from the repo provided by the UTAs
  - We edited the modules and testbenches we previously had
  - We went from 1 out of 6 test cases passed to 3 out of 4
  - We managed to successfully debug many issues, ranging from the wrong number of bits, syntax errors, naming issues... - we used VSCode's LiveShare feature for this. It was a team effort which took many hours and the changes were committed by Antoine but it was a team task in which everyone got to participate.
  - We started discussing implementing the hazard control and pipelining later on
    ![1000011679](https://github.com/user-attachments/assets/a1fe9d1a-9d5f-44af-a730-6e390b1e6e52)

## Lab meetup (28/11)
  - We had some errors with the integration
  - Use of gtkwave for debugging
  - We had issues with the ALU testbench and control unit testbench which we made ourselves, as well as the MUX testbench (which was provided to us), which were working the day before but somehow only started working once we commented out the following lines from the doit.sh script:
    
#if [ $name=="verify.cpp" ]; then

#name="top"

#fi

  - We commented the doit.sh script to get a better understanding of what each line was doing, and then tried to make testbenches for the rom and sign extension modules
  - We noticed we'll have to amend some modules and testbenches in order to go from lab 4 to the finalised coursework
  - We had a lot of modules up and running by the end of the day

![image](https://github.com/user-attachments/assets/3703ac81-38f8-4b13-bb24-4329db993c46)
![image](https://github.com/user-attachments/assets/b44abfeb-0d67-4283-92e9-2448c3153f71)
![image](https://github.com/user-attachments/assets/5c775663-8845-4d05-a10a-dc0816b1a3ea)
![image](https://github.com/user-attachments/assets/e5d6dcf4-b575-4882-9c5c-8edab1121680)
![image](https://github.com/user-attachments/assets/d7fb6585-e7dc-4cd9-afd5-35feca2905d1)
![image](https://github.com/user-attachments/assets/9bc7ce7f-569f-4fbe-924e-1b3a08a6e105)

## Lab meetup (29/11)
  - We met today for more debugging
  - Edited modules for program counter and rom
  - Adjusted program counter, rom and top testbenches
  - Went through the instructions for the project to split the tasks more appropriately, redefine the timeline
  - First time all tests ran successfully! 
![image](https://github.com/user-attachments/assets/46d4181e-92d0-480e-a301-8ffec25d1f41)








