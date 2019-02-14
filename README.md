# Monoceros (UNIX)

- [Compilation Instructions](#compilation-instructions)
- [Resources](#resources)
    - [Essential Git Commands](#essential-git-commands)
    - [NCURSES](#ncurses)

## Compilation Instructions (UNIX)
```sh
# Compile game:
gcc -o main main.c menu.c menu.h tcp_client.c tcp_client.h gamePlay.c gamePlay.h interfaces.h sprites.c sprites.h effects.c effects.h levels.c levels.h planet.c planet.h ai.c ai.h scores.c scores.h -lncursesw -lm -Wall -std=gnu99

# Compile server:
gcc -o server tcp_server.c menu.c menu.h tcp_client.c tcp_client.h gamePlay.c gamePlay.h interfaces.h sprites.c sprites.h effects.c effects.h levels.c levels.h planet.c planet.h ai.c ai.h scores.c scores.h -lncursesw -lm -Wall -std=gnu99
```

## Resources

### Essential Git Commands

**Get this repository for the first time:**

```sh
git clone https://github.com/chaderdwins/Monoceros.git
```

**Update your local repository:**

```sh
git pull
```

**Check the state of your local repository:**

```sh
git status
```

**Switch to a new branch:**

```sh
git branch -b my-branch
```

**Switch to an existing branch:**

```sh
git checkout my-branch
```

**List branches:**

```sh
git branch --list
```

**Update a branch with changes from the master branch:**

```sh
# Switch to the branch to update
git checkout my-branch
# Pull in changes from the master branch (will fail if there are conflicts)
git pull origin master
```

**Commit (save) changes:**

```sh
# View the files that have changed
git status
# Stage changes to a file
git add my-file
# Commit all staged changes
git commit -m "My message describing what these changes do"
```

**Push changes to the remote repository:**

```sh
git push
```

### NCURSES

[tldp.org/HOWTO/NCURSES-Programming-HOWTO](http://www.tldp.org/HOWTO/NCURSES-Programming-HOWTO/index.html)

