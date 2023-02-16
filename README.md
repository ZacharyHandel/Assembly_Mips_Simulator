# Mips Assembly Language Simulator
This is my assembly language mips simulator. It will include a registry, slots in memory, and the ability to code in assembly to manipulate the registry and the memory slots. This software will be within the consol and is written in C++.

## Desired Features
### Menu Screen
The menu screen will include the following options in this order:
1. Write Code
2. Run Simulation
3. Edit Registry
4. Edit Memory Slots
5. Manual
6. Exit

### Write Code Section
- When selected from the menu, the 'Write Code' option will display a text box that will allow for coding. It will be similar to the VIM editor in that if you want to save and exit it will use the ESC + : + wq to write and quit.
- This will be accomplished by using a parser that will read all of the code and it will be able to translate all of the desired tasks ran by the user.

### Run Simulation Section
- The 'Run Simulation' secion will run an instant simulation of the code. If there is an error detected by the parser, it will be thrown when the 'Run Simulation' section is selected and it will not run the simulation.

### Edit Registry Section
- When selected from the menu, the 'Edit Registry' option will allow you to edit the number of registry slots you want available during the simulation.

### Edit Memory Slots Section
- When seleted from the menu, the "Edit Memory Slots' option will allow you to determine what slots in memory are accessible and what pre-determined values are in those slots (this will be on a 4 bit basis as of 2-15-2023).

### Manual Section
- When selected from the menu, the "Manual" section will create a new menu that allows you to navigate the manual of the software. The manual will include the following options:
1. How to Write Assembly. This option will refer the user to a webpage that is accessible to learning writing in assembly.
2. How to Edit Registries. This option will guide the user on how to edit the registries within the simulation.
3. How to Edit Memory Slots. This option will guide the user on how to edit the memory slots within the simulation.
4. Errors. This seciton will explain all of the errors possible within the simulation.
5. About. This section will explain the motivation of the software and about the creators.

### Exit
- Exit will simply exit the software.

