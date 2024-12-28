# C Programming  Practice 

[More about memory](https://mem-recur.surge.sh/)

## How to Clean Up Unnecessary Files

You can remove unnecessary files (like `input.txt`, `output.txt`, `.exe` files, `tempCodeRunnerFile.cpp`, `.vscode`, and `.cph` files) from the current directory by running the following Python script.

### Prerequisites

Before running the script, ensure that Python is installed on your system.

- [Download Python](https://www.python.org/downloads/) if you haven't already.

### Steps

1. **Open your terminal or command prompt.**
2. **Navigate to the project directory.**
3. **Run the following Python script:**

```python
import os

# List of files to remove
files_to_remove = [
    "input.txt",
    "output.txt",
    "tempCodeRunnerFile.cpp",
] + [f for f in os.listdir() if f.endswith(".exe") or f.endswith(".cph")]

# Remove the files
[os.remove(f) for f in files_to_remove if os.path.exists(f)]
```

### What the Script Does:
- **Removes the following files:**
  - `input.txt`
  - `output.txt`
  - All `.exe` files
  - `tempCodeRunnerFile.cpp`
  - All `.cph` files
- **How it works:**
  - The script checks the current directory for the listed files and removes them if they exist.
  - It ensures no errors occur by checking whether the file exists before attempting deletion.
