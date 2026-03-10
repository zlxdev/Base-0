# Contributing to Base-0

Again, thank you for considering to contribute voluntarily towards this repository. We hope that what this repository would be of someones help in the near future, even if it's not now.

So let's proceed to the step-by-step instruction on how to fork, clone your repository, as well as branching, commiting, to prs and pushing.

## 1. Fork the Project
Click the **Fork** button at the top-right of this page. This creates a copy of my code in *your* GitHub account.

## 2. Clone to your Machine
Open your terminal/WSL and run:
```bash
# For SSH encrypted
git clone git@github.com:[YOURUSERNAME]/Base-0.git/
# For contributers who don't use SSH
git clone https://github.com/[YOURUSERNAME]/Base-0.git

# then go to the diretory by typing this cmd
cd Base-0
```

## 3. Create a Branch (Important!)
Never work directly on `main`. Create a "branch" for your specific change:
```bash
# Example: If you are fixing a typo in pointers
git checkout -b fix/pointer-typo
```

## 4. Make your Changes
Edit the files in VS Code. When you are done:
```bash
git add .
git commit -m "Fix typo in pointer explanation"
```

## 5. Push and PR
Upload your branch to your fork:
```bash
git push origin fix/pointer-typo
```
Go back to GitHub, and you will see a green button says **"Compare & pull request"**. Click it!