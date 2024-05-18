## Using Tasks for SystemC to run, debug Project and so on

1. In the menu, select `Run Task...`
2. Select the task you want to launch:
- `SystemC - Build`: build the project
- `SystemC - Run`: Run the project
- `SystemC - Run GTKWave`: Run GTKWave
- `SystemC - Clean`: Clean project (Full clean)  
- `SystemC - Doxygen - HTML doc.`: Generate HTML documentation with Doxygen

## Configure GIT for your new project

#### Go to your new project folder
```bash
cd <project_name>
```
#### Configure name and email address
```bash
git config --global user.name "your name" 
git config --global user.email "your email address"
```
#### Avoid typing your username and password in vscode each time
This is useful when connecting your GIT to GitHub.
```bash
git config credential.helper store
```

## Using GitHub with visual studio code

We consider you have followed the sections above:
* Getting Started
* Configure GIT for your new project

Now, how to communicate with GitHub ?

1. Open visual studio code.
2. Click on the `Source Control` icon on your left side or use `Ctrl+Shift+G` shortcut. 
3. For the first time, click on `Initialize Repository` button
4. Enter a message for your first commit (ex: first commit) and click on Commit icon
5. Press `F1` and typing `git add remote` and entering :
   * *remote name* : your github repository previously created
   * *remote url* : https://github.com/xxx/your_project.git
   * *username* and *password*
6. Push to the GitHub server (master branch)

See https://code.visualstudio.com/docs/editor/versioncontrol for more details.

## Generate Doxygen documentation

You can use [Using Tasks for SystemC](#using-tasks-for-systemmc-to-run-debug-project-and-so-on) or follow the steps below.

1. Open external terminal from vscode, using keyboard shortcut: `Ctrl+Shift+C`, or pressing `F1` key and typing `external`
2. Generate HTML documentation

  * From the User interface (allow you updating the `Doxyfile` configuration file)

```bash
doxywizard
```

  * Directly from `Doxyfile` configuration file


```bash
doxygen
```
3. A new `html` folder  is created, the entry file is `index.html`

