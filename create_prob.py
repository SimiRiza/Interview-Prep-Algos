import os
import subprocess
import sys

# 1️⃣ Get problem name from command line arguments or input
if len(sys.argv) > 1:
    problem_name = sys.argv[1]
else:
    problem_name = input("Enter problem name: ")

# 2️⃣ Set your repo path here
repo_path = r"C:\Users\Simi\Desktop\interviewprep.algos"  # Change to your actual repo path
folder_path = os.path.join(repo_path, problem_name)

# 3️⃣ Create folder
os.makedirs(folder_path, exist_ok=True)

# 4️⃣ Create 4 cpp files with template
cpp_template = """#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code here
    return 0;
}
"""
for i in range(1, 5):
    file_path = os.path.join(folder_path, f"solution{i}.cpp")
    with open(file_path, "w") as f:
        f.write(cpp_template)

# 5️⃣ Create README.md with template
readme_content = f"# {problem_name}\n\n## Problem Description\n<!-- Add description -->\n\n## Solutions\n"
for i in range(1, 5):
    readme_content += f"- Approach {i}: solution{i}.cpp\n"

with open(os.path.join(folder_path, "README.md"), "w") as f:
    f.write(readme_content)

print(f"Folder '{problem_name}' with 4 cpp files and README.md created successfully!")

# 6️⃣ Optional Git commands: add, commit, push
try:
    subprocess.run(["git", "-C", repo_path, "add", "."], check=True)
    subprocess.run(["git", "-C", repo_path, "commit", "-m", f"Add problem: {problem_name}"], check=True)
    subprocess.run(["git", "-C", repo_path, "push"], check=True)
    print("Changes added, committed, and pushed to GitHub successfully!")
except subprocess.CalledProcessError as e:
    print("Git command failed. Make sure Git is installed and your repo is linked to GitHub.")
    print(e)
