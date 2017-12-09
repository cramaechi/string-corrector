# String Corrector
A program that reads in a sentence and outputs the sentence with spacing corrected and with 
letters corrected for capitalization.

## Setup
1. Download and install [Git](https://git-scm.com/downloads), if you don't already have it.

2. Open terminal and run the git clone command:

   ```
   $ git clone https://github.com/cramaechi/string-corrector.git
   ```
    or [download as ZIP](https://github.com/cramaechi/string-corrector/archive/master.zip).

3. Go to the project folder:

   ```
   $ cd string-corrector
   ```

4. Compile:

   ```
   $ make
   ```
   
## Usage
Run:

```
$ ./string_corrector
```

Sample Output:
```
Enter a sentence:        the Answer to life, the UNIVERSE, and        everything                                      
IS 42.                                                                                                                
                                                                                                                      
Formatted sentence: The answer to life, the universe, and everything is 42. 
```
