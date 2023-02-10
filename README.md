# D&D 5e Character Sheet
#### Video Demo: <URL HERE>
#### Description:
This application is meant to serve as an alternative to the character sheet provided by Wizards of the Coast for their fantasy roleplaying game "Dungeon & Dragons: 5th Edition." At this point in time it is only capable of saving details for a single character. Code is written in C++ using Visual Studio and the .NET framework.
  
## Files:
  Files and their functions are listed below:
  - MyForm.cpp: Main file that opens character sheet form.
  
  - Header.h: Contains all functions that are not form-specific. Included in all other header files.
  
  - MyForm.h: Handles drawing all form objects and their functionality within the main character sheet form.
  
  - SaveConfirm.h: Handles drawing all form objects and their functionality within the popup window that displays when 'Save' button is clicked on main character sheet within the 'CORE' tab.
  
  - spellAddPopUp.h: Handles drawing all form objects and their functionality within the popup window that displays when 'Add New Spell' button is clicked on main character sheet within the 'SPELLS' tab.
  
  - ExpandListSpells.h: Handles drawing all form objects and their functionality within the popup window that displays when 'Expand Spells List' button is clicked on main character sheet within the 'SPELLS' tab.
  
  - DeleteSpellConfirm.h: Handles drawing all form object and their functionality within the popup window that displays when 'Delete Spell' button is clicked within the 'Expand List Spells' form.
  
  - clearSheetContentsConfirm.h: Handles drawing all form objects and their functionality within the popup window that displays when 'Clear Sheet' buttons is clicked on main character sheet within the 'CORE' tab.

## Directories:
  Directories and their contents are listed below:
  - Character_Info: Contains <Character_Info/saved> which contains directories <Character_Info/saved/CORE>, <Character_Info/saved/BIO>, and <Character_Info/saved/SPELLS>. These directories correspond to tabs within main character sheet, and contain text files with user-entered information saved from character sheet.
  
  - Images: Contains images used for layout of main character sheet form, as well as app icon.
  
  - Spells: Contains <Spells/saved_spells> directory, which contains directories corresponding to each level of spell a character can have. Each of these directories contains a directory for each spell a character has of that spell level.

  ## File System:
  Application fields are filled in from temporary directories that are created on start up. Changes to application fields are not permanent until the 'Save' button is clicked.
  ### Start Up and Shutdown
  - When application starts up <Character_Info/temp> and <Spells/temp_spells> are created. All folders and their files are copied into these directories from <Character_Info/saved> and <Spells/saved_spells>, respectively. Application reads data from these two temporary directories and uses it to fill corresponding fields.
  
  - When application is closed, files and directories within <Character_Info/temp> and <Spells/temp_spells> directories are recursively deleted. The directories themselves are then removed from the file system, leaving only <Character_Info/saved> and <Spells/saved_spells>.
  
  ### Spell Add and Delete
  - When new spell is added, a new directory is created within <Spells/temp_spells/corresponding spell level>. New spell directory contains text files with all user-entered data, and is retrieved when a spells is highlighted within the 'Expand Spells List' form.
  
  - When a spell is deleted, its associated directory is removed from <Spells/temp_spells/corresponding spell level>. Deleted spell will no longer show up in any spell lists for the remainder of the user session.
  
  ### Saving and Clearing Sheet Data
  - When 'Save' button is clicked, folders and their files are copied from <Character_Info/temp> and <Spells/temp_spells> into <Character_Info/saved> and <Spells/saved_spells>, respectively. And folders or files that already existed within the permanent directories are completely overwritten. These files will be copied back into the temporary directories when the application starts back up.
  
  - When 'Clear Sheet' button is clicked, all fillable text fields are set to blank. Any files within the temporary directories are deleted from the system. This is only permanent if the 'Save' button is clicked.
