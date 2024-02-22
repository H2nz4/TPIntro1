$ git init # init git. This will typically create a .git folder locally
$ git status
On branch main

No commits yet

Untracked files:
  (use "git add <file>..." to include in what will be committed)
        src/

nothing added to commit but untracked files present (use "git add" to track)
$ git add src/ # add all files in src directory to the next commit
$ git commit -m "first commit" # commit
$ git status
On branch main
nothing to commit, working tree clean