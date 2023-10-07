# Fast Memory Operations
## Credit
I used [Limine](https://github.com/limine-bootloader/limine/blob/trunk/common/lib/mem.asm_x86_64) as a reference, however, much of the code was written from scratch using the Intel SDM as a reference.  
I'll still credit the file which in Limine which I used as a reference for courtesy.
## Speed
In my tests, the speed of these functions are comparable to my tests with GLIBC, however, don't quote me on that.  
All I know is that they are fast as hell.  
## Other Information
I wrote a blog [post](https://xyve7.github.io/posts/optimizing-the-mem-functions-in-c/) about my adventures with learning about how interesting optimizing such basic functions is.  
The blog also shows the real world performance increase I got from writing the functions in Assembly.  
## Future Plans
I want to add the following features soon:
* Add a fast `str*` functions into the mix
