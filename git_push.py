import subprocess
import sys
import os

# 1️⃣ Ask for commit message if not passed
if len(sys.argv) > 1:
    commit_message = " ".join(sys.argv[1:])
else:
    commit_message = input("Enter commit message: ")

# 2️⃣ Automatically use the folder where this script is located
repo_path = os.path.dirname(os.path.abspath(__file__))

# 3️⃣ Run git commands in the repo folder
try:
    subprocess.run(["git", "-C", repo_path, "add", "."], check=True)
    subprocess.run(["git", "-C", repo_path, "commit", "-m", commit_message], check=True)
    subprocess.run(["git", "-C", repo_path, "push", "origin", "main"], check=True)
    print("\n✅ All changes added, committed, and pushed successfully!")
except subprocess.CalledProcessError as e:
    print("\n❌ Git command failed! Make sure your repo path and branch are correct.")
    print(e)
