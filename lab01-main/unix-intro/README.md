# Unix Intro

In this README, you will put the answers to several questions found
in the lab handout, and replicated here. All of your work for this part
of the lab should be included in this README.

This README is written using [Markdown](https://www.markdownguide.org/).
Please format your answers using Markdown so that it displays neatly
in your GitHub repository's web interface.
You can check your formatting by pushing your code and navigating to your
README within your private GitHub repository.


## Questions
Complete the questions below in the space provided.
More context can be found in the lab handout.

### Unix Questions
 * Explain what the following command does: `cd .. `
   change current directory to the mother directory (go up a level)

 * What command would you execute to find out the contents of your current directory? (Use the triple quotes \`\`\` so that your output is formatted as code).
  ```
  ls
  ```

 * What command would you execute to find out the names of all the files in your current directory whose filenames end in `.h`?
  ```
  ls *.h
  ```

 * What command suspends a running process at the command prompt?
   ```
   ^z
   ```

 * What command brings a suspended process to the foreground?
   ```
   fg
   ```

 * Use `grep` to find all the lines in the file `/usr/share/dict/words` that contain the string `byte`.  What is the command you ran and the output of the command?
   ```
   grep 'byte' /usr/share/dict/words
   Presbyterian
   Presbyterian's
   Presbyterianism
   Presbyterianism's
   Presbyterians
   byte
   byte's
   bytes
   gigabyte
   gigabyte's
   gigabytes
   kilobyte
   kilobyte's
   kilobytes
   megabyte
   megabyte's
   megabytes
   terabyte
   terabyte's
   terabytes
   ```

 * Use `grep -n` to also learn the line numbers of all the lines in the file `/usr/share/dict/words` that contain the string `byte`.  What is the command you ran and the output of the command?
   ```
   grep -n 'byte' /usr/share/dict/words
   14252:Presbyterian
   14253:Presbyterian's
   14254:Presbyterianism
   14255:Presbyterianism's
   14256:Presbyterians
   28754:byte
   28755:byte's
   28756:bytes
   50016:gigabyte
   50017:gigabyte's
   50018:gigabytes
   59362:kilobyte
   59363:kilobyte's
   59364:kilobytes
   63823:megabyte
   63824:megabyte's
   63825:megabytes
   93246:terabyte
   93247:terabyte's
   93248:terabytes
   ```

### emacs Questions
You need to perform these actions on the CS Linux machines as the file contents will be different on other systems.

 * Open the file `/usr/share/dict/words` in emacs. Use the goto-line command via the `M-g g` keyboard shortcut to jump to line 90479.  (Note that the meta key `M` is ESC on the Unix systems.) What word is on that line?
   stupendous

* Now move to the end of the buffer by using the goto-line command to jump to line 102401.  What is the last word in the buffer?
   études

 * From the end of the buffer, search backwards using the command `C-r` for the string `dry`.  What is the first word encountered by that reverse search?
   wizardry's
