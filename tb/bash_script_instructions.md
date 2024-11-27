1) Make sure TopLevelCPU.sv is in the ../rtl directory.

2) Testbench C++ files (e.g., TopLevelCPU_tb.cpp) should be in the test folder.

3) Run the script via **./doit.sh**.

4) If you want to test specific files, provide them as arguments: **./doit.sh test/TopLevelCPU_tb.cpp**.

5) View the generated coverage report in logs/html/index.html.


**NB:**
**Install the necessary tools if you haven't already:**

sudo apt-get update
sudo apt-get install lcov verilator

**Create the logs directory with proper permissions:**

mkdir -p logs

chmod 777 logs

**Install dos2unix if you don't have it (for wsl):**

apt-get update

apt-get install dos2unix

dos2unix doit.sh

chmod +x doit.sh


This converts the Windows line endings to Unix-style, resolving the interpreter error.
