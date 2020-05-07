# CMPE 283 - Virtualization Technologies - assignments 2,3,4
Changes to the kvm modules to display exit counts and exit cycles with the execution of CPUID instruction

## How to run

Goal: Modify CPUID instruction to provide details of number of exits and cpu cycle times.
Steps:
>	Clone and build the linux kernel from Torvalds linux repository in the host OS. This is called the outer VM from here.

>	Make changes to the cupid.c file in the path /arch/x86/kvm/ . Changes include

        >>	Creation of variables to hold the data of total no. of exits, total cpu cycle time, an array of exits counter and an array of cpu cycle times for each exit.
        
        >>	Logic of an if-else ladder structure that handles the output based on the input provided in the eax and ecx.
        
        >>	Logic to handle the exits that are not defined in the SDM
        
        >>	Logic to handle the exits that are not enabled by the KVM.
        
>	Make changes to the vmx.c. Changes include:

        >>	Read the time stamp counter using rdtsc() at the start and end of the function, before returning.
        
        >>	Increment the total number of exits and individual exit counters for every handle call.
        
        >>	Update the time cycle counters with the cycle time for the exits
        
>	Install virt-manager using “sudo apt install”

>	Install a linux OS inside the virt-manager (we used ubuntu distribution here). This will be referred to as inner VM from now.

>	In the outer VM, remove the kvm and kvm_intel modules

        >>	$ sudo rmmod kvm_intel
        
        >>	$ sudo rmmod kvm
        
>	In the outer VM, compile the modules

        >>	$ sudo make -j 8 modules M=arch/x86/kvm
        
            >>>	The warnings and errors if any will be shown in this step
            
>	In the outer VM, install the modules

        >>	$ sudo insmod arch/x86/kvm.ko
        
        >>	$ sudo insmod arch/x86/kvm-intel.ko
        
>	Start the virtual manager 

        >>	$ sudo virt-manager
        
>	In the inner VM , install the cpuid package

>	In the terminal run the commands to test each leaf

        >>	$ cpuid -l 0x4fffffff
        
        >>	$ cpuid -l 0x4ffffffe
        
        >>	$ cpuid -l 0x4ffffffd -s exit_number
        
        >>	$ cpuid -l 0x4ffffffc -s exit_number
        
>	In the outer Vm , run the command “dmesg” to view the print statements


> Test run exit counter values can be found in the 283/Assignment4 folder


## Sample Output

<img width="900" alt="SampleOutput" src="https://github.com/cvamsik/CMPE283Assn3/blob/master/SampleOutput.png">
