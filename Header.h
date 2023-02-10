#pragma once

#include <msclr\marshal_cppstd.h>
#include <string>
#include <filesystem>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <array>
#include <any>
#include <cmath>
#include <filesystem>

// Declare variables.
std::string currentSpellName{};
std::string listToAddSpell{};
std::string listToLoad{};
bool newSpellAdded{ false };
bool saveCharacterChanges{ false };
bool spellDeleteConfirm{ false };
bool clearSheetContents{ false };
int headerIterator{ 0 };

// Declare functions.
std::string convertBoolToString(bool boolean);
template<typename CSVfilepath, typename... textbox> void writeSingleLineTextboxToCSV(CSVfilepath filepath, textbox... sheetTextboxes);
template<typename CSVfilepath, typename... numericUpdown> void writeNumericUpdownToCSV(CSVfilepath filepath, numericUpdown... sheetNumericUpdowns);
template<typename CSVfilepath, typename... checkbox> void writeCheckboxToCSV(CSVfilepath filepath, checkbox... sheetCheckboxes);
template<typename CSVfilepath, typename... combobox> void writeComboboxToCSV(CSVfilepath filepath, combobox... sheetComboboxes);
template<typename CSVfilepath, typename textbox> void writeMultiTextboxToCSV(CSVfilepath filepath, textbox sheetTextbox);
template<typename CSVfilepath, typename spellLevel, typename spellSchool, typename spellcastAbility, typename ritualBool, typename verbalBool, typename semanticBool, typename materialBool, typename concentrationBool, typename... spellTextbox> void writeSpellToCSV(CSVfilepath filepath, spellLevel sheetSpellLevel, spellSchool sheetSpellSchool, spellcastAbility sheetSpellcastAbility, ritualBool ritual, verbalBool verbal, semanticBool semantic, materialBool material, concentrationBool concentration, spellTextbox... sheetSpellTextboxes);
template<typename CSVfilepath, typename... textbox> void readSingleLineTextboxFromCSV(CSVfilepath filepath, textbox... sheetTextboxes);
template<typename CSVfilepath, typename... numericUpdown> void readNumericUpdownFromCSV(CSVfilepath filepath, numericUpdown... sheetNumericUpdowns);
template<typename CSVfilepath, typename... checkbox> void readCheckboxFromCSV(CSVfilepath filepath, checkbox... sheetCheckboxes);
template<typename CSVfilepath, typename... combobox> void readComboboxFromCSV(CSVfilepath filepath, combobox... sheetComboboxes);
template <typename CSVfilepath, typename multiTextbox> void readMultiTextboxFromCSV(CSVfilepath filepath, multiTextbox sheetTextbox);
template<typename CSVfilepath, typename spellList> void readSpellToListFromCSV(CSVfilepath filepath, spellList sheetSpellList);
template<typename... checkbox> void setCheckboxesUnchecked(checkbox... sheetCheckboxes);
void createTempData();
void createSavedData();
void deleteTempData();
int getCharLevel(System::Windows::Forms::NumericUpDown^ charLevel);
void setProfBonus(System::Windows::Forms::Label^ profBonus, System::Windows::Forms::NumericUpDown^ charLevel);
void setTextBorderNone(System::Windows::Forms::TextBox^ textbox);
void setTextBorderFixedSingle(System::Windows::Forms::TextBox^ textbox);
void setLabelBorderNone(System::Windows::Forms::Label^ label);
void setLabelBorderFixedSingle(System::Windows::Forms::Label^ label);
void setTextBoxContentsBlank(System::Windows::Forms::TextBox^ textbox);
void setLabelContentsBlank(System::Windows::Forms::Label^ label);
void setAbilityMod(System::Windows::Forms::TextBox^ scoreAbility, System::Windows::Forms::Label^ modAbility);
int getAbilityMod(System::Windows::Forms::Label^ modAbility);
void setSaveMod(System::Windows::Forms::Label^ modAbility, System::Windows::Forms::Label^ saveName, System::Windows::Forms::CheckBox^ profCheck, System::Windows::Forms::Label^ profBonus);
bool getProficiency(System::Windows::Forms::CheckBox^ profCheck);
void setSkillMod(System::Windows::Forms::Label^ skillName, System::Windows::Forms::CheckBox^ skillProf, System::Windows::Forms::Label^ abilityMod, System::Windows::Forms::Label^ profBonus);
int getProfBonus(System::Windows::Forms::Label^ profBonus);
void setPassPerception(System::Windows::Forms::Label^ passPerception, System::Windows::Forms::Label^ modWIS);
void profSaveUpdated(System::Windows::Forms::CheckBox^ profCheckBox, System::Windows::Forms::Label^ save, System::Windows::Forms::Label^ profBonus);
void profSkillCheckUpdated(System::Windows::Forms::CheckBox^ profCheckBox, System::Windows::Forms::Label^ skill, System::Windows::Forms::Label^ profBonus);
int getDieType(System::Windows::Forms::ComboBox^ dieType);
void setMaxNumberHitDie(System::Windows::Forms::ComboBox^ hitDieType, System::Windows::Forms::NumericUpDown^ charLevel, System::Windows::Forms::NumericUpDown^ currentNumHitDie);
void setCurrentHitDieToMax(System::Windows::Forms::NumericUpDown^ currentNumHitDie);
int calcMaxHitPoints(System::Windows::Forms::ComboBox^ hitDieType, System::Windows::Forms::NumericUpDown^ charLevel, System::Windows::Forms::Label^ modCON);
int calcHitPointsAfterLevel1(int hitDie, int level, int mod_CON);
void setMaxHitPoints(System::Windows::Forms::ComboBox^ hitDieType, System::Windows::Forms::NumericUpDown^ charLevel, System::Windows::Forms::Label^ modCON, System::Windows::Forms::TextBox^ maxHitPoints);
void setCurrentHitPointsToMax(System::Windows::Forms::NumericUpDown^ currentHitPoints, System::Windows::Forms::TextBox^ maxHitPoints);
void setInitiative(System::Windows::Forms::TextBox^ initiative, System::Windows::Forms::Label^ modDEX);
void setNumericUpDownZero(System::Windows::Forms::NumericUpDown^ numericUpDown);
void addSpellToList(std::string listToAddSpell,
	System::String^ tempSpell,
	System::Windows::Forms::ListBox^ listCantrips,
	System::Windows::Forms::ListBox^ list1stLevelSpells,
	System::Windows::Forms::ListBox^ list2ndLevelSpells,
	System::Windows::Forms::ListBox^ list3rdLevelSpells,
	System::Windows::Forms::ListBox^ list4thLevelSpells,
	System::Windows::Forms::ListBox^ list5thLevelSpells,
	System::Windows::Forms::ListBox^ list6thLevelSpells,
	System::Windows::Forms::ListBox^ list7thLevelSpells,
	System::Windows::Forms::ListBox^ list8thLevelSpells,
	System::Windows::Forms::ListBox^ list9thLevelSpells);
void readSpellListCSV_ToProperList(std::string filepath, System::Windows::Forms::ListBox^ spellList);
template<typename... textbox> void setTextboxBlank(textbox... sheetTextboxes);
template<typename... checkbox> void setCheckboxesUnchecked(checkbox... sheetCheckboxes);
void copyFilesNewDir(const std::filesystem::path& src, const std::filesystem::path& target) noexcept;
std::string MarshalString(System::String^ s);
template <typename key, typename value> void appendSpellCSV(key spellFieldName, value spellFieldValue, std::ofstream& file);
std::string MarshalString(System::String^ s);
template<typename spellsList, typename listSpellLevel, typename matCompText, typename descriptionText, typename higherLevelsText, typename... label> void initializeSpellsList(spellsList sheetSpellsList, listSpellLevel sheetListSpellLevel, matCompText sheetMatCompText, descriptionText sheetDescriptionText, higherLevelsText sheetHigherLevelsText, label... sheetLabels);
std::string getSpellListFilepath(System::Windows::Forms::ComboBox^ spellListLevel);
void clearSpellsList(System::Windows::Forms::ListBox^ listSpells);
template<typename spellName, typename spellLevel, typename materialsTextbox, typename descriptionTextbox, typename atHigherLevelsTextbox, typename... label> void readSpellLabelFromCSV(spellName currentSpellName, spellLevel currentSpellLevel, materialsTextbox sheetMaterialsTextbox, descriptionTextbox sheetDescriptionTextbox, atHigherLevelsTextbox sheetAtHigherLevelsTextbox, label... sheetLabels);
void modifySpellLabel(System::Windows::Forms::Label^ spellLabel, std::string fieldName);
void checkSpellNameInList(std::string filepath, std::string spellName);
void deleteSpellFromCharacter(std::string filepath, std::string selectedSpellName);
void deleteSpellInfo(System::Windows::Forms::ComboBox^ spellLevelCombobox, std::string selectedSpellName);
void adjustSizeSpellsList(System::Windows::Forms::ListBox^ listSpells);
void resetTempSpellDirectory();
std::string getSpellLevelFilePath(System::Windows::Forms::ComboBox^ dropdownSpellLevel);




// Converts boolean to std::string.
std::string convertBoolToString(bool boolean)
{
	if (boolean == true) { return "true"; }
	else { return "false"; }
}

// Converts input of System::String^ to std::string.
std::string MarshalString(System::String^ s)
{
	msclr::interop::marshal_context context;
	std::string convertedString = context.marshal_as<std::string>(s);
	return convertedString;
}



//
// *** Write data to CSV file as std::strings. ***
//
template<typename CSVfilepath, typename... textbox> void writeSingleLineTextboxToCSV(CSVfilepath filepath, textbox... sheetTextboxes)
{
	// Initialize variables and vectors.
	cli::array<System::Windows::Forms::TextBox^>^ textboxes{ sheetTextboxes... };
	std::vector<std::string> textboxStrings{};

	// Copy element contents as std::string.
	for (int i = 0; i < textboxes->Length; i++)
	{
		textboxStrings.push_back(MarshalString(textboxes[i]->Text));
	}

	// Create file stream for CSV file and open file.
	std::ofstream file;
	file.open(filepath, std::ios::out);

	// Save each of element's contents to CSV file.
	// "^" being used as separator.
	for (int i = 0; i < textboxStrings.size(); i++)
	{
		file << textboxStrings[i] << "^\n";
	}

	file.close();
}
template<typename CSVfilepath, typename... numericUpdown> void writeNumericUpdownToCSV(CSVfilepath filepath, numericUpdown... sheetNumericUpdowns)
{
	// Initialize variables and vectors.
	cli::array<System::Windows::Forms::NumericUpDown^>^ numericUpdowns{ sheetNumericUpdowns... };
	std::vector<std::string> numericUpdownStrings{};
	System::String^ level{};

	// Copy element contents as std::string.
	for (int i = 0; i < numericUpdowns->Length; i++)
	{
		level = System::Convert::ToString(numericUpdowns[i]->Text);
		numericUpdownStrings.push_back(MarshalString(level));
	}

	// Create file stream for CSV file and open file.
	std::ofstream file;
	file.open(filepath, std::ios::out);

	// Save each of element's contents to CSV file.
	// "^" being used as separator.
	for (int i = 0; i < numericUpdownStrings.size(); i++)
	{
		file << numericUpdownStrings[i] << "^\n";
	}

	file.close();
}
template<typename CSVfilepath, typename... checkbox> void writeCheckboxToCSV(CSVfilepath filepath, checkbox... sheetCheckboxes)
{
	// Initialize variables and vectors.
	cli::array<System::Windows::Forms::CheckBox^>^ checkboxes{ sheetCheckboxes... };
	std::vector<std::string> checkboxStrings{};
	
	// Copy element contents as std::string.
	for (int i = 0; i < checkboxes->Length; i++)
	{
		checkboxStrings.push_back(convertBoolToString(checkboxes[i]->Checked));
	}

	// Create file stream and open CSV file.
	std::ofstream file;
	file.open(filepath, std::ios::out);

	// Save each element's contents to CSV file.
	// "^" being used as separator.
	for (int i = 0; i < checkboxStrings.size(); i++)
	{
		file << checkboxStrings[i] << "^\n";
	}

	file.close();
}
template<typename CSVfilepath, typename... combobox> void writeComboboxToCSV(CSVfilepath filepath, combobox... sheetComboboxes)
{
	// Initialize variables and vectors.
	cli::array<System::Windows::Forms::ComboBox^>^ comboboxes{ sheetComboboxes... };
	std::vector<std::string> comboboxStrings{};

	// Copy element contents as std::string.
	for (int i = 0; i < comboboxes->Length; i++)
	{
		comboboxStrings.push_back(MarshalString(comboboxes[i]->Text));
	}

	// Create file stream for CSV file and open file.
	std::ofstream file;
	file.open(filepath, std::ios::out);

	// Save each of element's contents to CSV file.
	// "^" being used as separator.
	for (int i = 0; i < comboboxStrings.size(); i++)
	{
		file << comboboxStrings[i] << "^\n";
	}

	file.close();
}
template<typename CSVfilepath, typename textbox> void writeMultiTextboxToCSV(CSVfilepath filepath, textbox sheetTextbox)
{
	// Initialize variables and vector.
	std::string comboboxString{};

	// Copy element contents as std::string.
	comboboxString = MarshalString(sheetTextbox->Text);

	// Create file stream for CSV file, open file, and save textbox's contents.
	std::ofstream file;
	file.open(filepath, std::ios::out);
	file << comboboxString << "\n";

	file.close();
}
template<typename CSVfilepath, typename spellLevel, typename spellSchool, typename spellcastAbility, typename ritualBool, typename verbalBool, typename semanticBool, typename materialBool, typename concentrationBool, typename... spellTextbox> void writeSpellToCSV(CSVfilepath filepath, spellLevel sheetSpellLevel, spellSchool sheetSpellSchool, spellcastAbility sheetSpellcastAbility, ritualBool ritual, verbalBool verbal, semanticBool semantic, materialBool material, concentrationBool concentration, spellTextbox... sheetSpellTextboxes)
{
	// Initialize variables and vectors.
	cli::array<System::Windows::Forms::TextBox^>^ textboxes{ sheetSpellTextboxes... };
	cli::array<System::Windows::Forms::ComboBox^>^ comboboxes{ sheetSpellLevel, sheetSpellSchool, sheetSpellcastAbility };
	cli::array<System::Windows::Forms::CheckBox^>^ checkboxes{ ritual, verbal, semantic, material, concentration };
	std::vector<std::string> spellStrings{};
	std::string spellParameters{}, spellsList{}, spellFolder{};
	std::vector<std::string> multilineTextboxFilepaths{};
	std::string spellMaterialsFilepath{}, spellDetailsFilepath{}, spellAtHigherLevelsFilepath{};
	std::string line{}, word{};
	bool spellListSearch{ true };

	// Complete filepaths.
	// Filepath for new spell folder is Spells\temp_spells\<spell level>\<spell name>
	// Then, filepath for new spell is Spells\temp_spells\<spell level>\<spell name>\<spell name.txt>
	// CSV file containing list of spells is located in Spells\temp_spells\<spell level>\<spells list.txt>
	spellFolder = filepath + "/" + MarshalString(textboxes[0]->Text);
	spellParameters = spellFolder + "/" + MarshalString(textboxes[0]->Text) + ".txt";
	spellsList = filepath + "/" + MarshalString(comboboxes[0]->Text) + " Spells.txt";

	// Create directory for new spell.
	std::filesystem::create_directories(spellFolder);

	// Copy comboboxes as std::strings.
	for (int i = 0; i < comboboxes->Length; i++)
	{
		spellStrings.push_back(MarshalString(comboboxes[i]->Text));
	}

	// Copy checkboxes as std::strings.
	for (int i = 0; i < checkboxes->Length; i++)
	{
		spellStrings.push_back(convertBoolToString(checkboxes[i]->Checked));
	}

	// Copy textbox contents as std::strings.
	for (int i = 0; i < textboxes->Length - 3; i++)
	{
		spellStrings.push_back(MarshalString(textboxes[i]->Text));
	}

	// Create file stream and open CSV file.
	std::ofstream file;
	file.open(spellParameters , std::ios::out);

	// Save each element's contents to CSV file.
	// "^" being used as separator.
	for (int i = 0; i < spellStrings.size(); i++)
	{
		// Check if spell's name is already in list.
		if (i == 8)
		{

		}
		file << spellStrings[i] << "^\n";
	}

	// Spell name @ i = 8.

	file.close();

	// Create filepaths for writing multiline textbox CSV files.
	spellMaterialsFilepath = spellFolder + "/Materials.txt";
	spellDetailsFilepath = spellFolder + "/Details.txt";
	spellAtHigherLevelsFilepath = spellFolder + "/At Higher Levels.txt";
	multilineTextboxFilepaths.push_back(spellMaterialsFilepath);
	multilineTextboxFilepaths.push_back(spellDetailsFilepath);
	multilineTextboxFilepaths.push_back(spellAtHigherLevelsFilepath);

	// Create new file stream and open CSV file for each of the multiline text files.
	for (int i = 0; i < multilineTextboxFilepaths.size(); i++)
	{
		// Write multiline textbox contents to CSV file.
		writeMultiTextboxToCSV(multilineTextboxFilepaths[i], textboxes[i + 5]);
	}

	checkSpellNameInList(spellsList, MarshalString(textboxes[0]->Text));
}



//
// *** Read saved data from CSV file back into character sheet. ***
//
template<typename CSVfilepath, typename... textbox> void readSingleLineTextboxFromCSV(CSVfilepath filepath, textbox... sheetTextboxes)
{
	// Initialize variables and vectors.
	cli::array<System::Windows::Forms::TextBox^>^ textboxes{ sheetTextboxes... };
	std::vector<std::string> contents{};
	std::string line{}, word{}, fullTextbox{};

	// Create file stream and open CSV file.
	std::ifstream file;
	file.open(filepath, std::ios::in);

	// Loop through each line of CSV file.
	while (getline(file, line))
	{
		std::stringstream str(line);
		fullTextbox = "";

		// Loop through each word within the line.
		while (getline(str, word, '^'))
		{
			fullTextbox += word;
		}
		contents.push_back(fullTextbox);
	}

	// Copy info into textboxes.
	for (int i = 0; i < contents.size(); i++)
	{
		String^ newStr = gcnew String(contents[i].c_str());
		textboxes[i]->Text = newStr;
		delete newStr;
	}
	
	file.close();
}
template<typename CSVfilepath, typename... numericUpdown> void readNumericUpdownFromCSV(CSVfilepath filepath, numericUpdown... sheetNumericUpdowns)
{
	// Initialize variables and vectors.
	cli::array<System::Windows::Forms::NumericUpDown^>^ numericUpdowns{ sheetNumericUpdowns... };
	std::vector<std::string> contents{};
	std::string line{}, word{}, fullNumericUpdown{};

	// Create file stream and open CSV file.
	std::ifstream file;
	file.open(filepath, std::ios::in);

	// Loop through each line of CSV file.
	while (getline(file, line))
	{
		std::stringstream str(line);
		fullNumericUpdown = "";

		// Loop through each word within the line.
		while (getline(str, word, '^'))
		{
			fullNumericUpdown += word;
		}
		contents.push_back(fullNumericUpdown);
	}

	// Copy info into numeric updowns.
	for (int i = 0; i < contents.size(); i++)
	{
		String^ newStr = gcnew String(contents[i].c_str());
		numericUpdowns[i]->Maximum = System::Convert::ToInt16(newStr);
		numericUpdowns[i]->Value = System::Convert::ToInt16(newStr);
		delete newStr;
	}

	file.close();
}
template<typename CSVfilepath, typename... checkbox> void readCheckboxFromCSV(CSVfilepath filepath, checkbox... sheetCheckboxes)
{
	// Initialize variables and vectors.
	cli::array<System::Windows::Forms::CheckBox^>^ checkboxes{ sheetCheckboxes... };
	std::vector<std::string> contents{};
	std::string line{}, word{}, fullCheckbox{};

	// Create file stream and open CSV file.
	std::ifstream file;
	file.open(filepath, std::ios::in);

	// Loop through each line of CSV file.
	while (getline(file, line))
	{
		std::stringstream str(line);
		fullCheckbox = "";

		// Loop through each word within the line.
		while (getline(str, word, '^'))
		{
			fullCheckbox += word;
		}
		contents.push_back(fullCheckbox);
	}

	// Copy info into checkboxes.
	for (int i = 0; i < contents.size(); i++)
	{
		if (contents[i] == "true") { checkboxes[i]->Checked = true; }
		else { checkboxes[i]->Checked = false; }
	}
}
template<typename CSVfilepath, typename... combobox> void readComboboxFromCSV(CSVfilepath filepath, combobox... sheetComboboxes)
{
	// Initialize variables and vectors.
	cli::array<System::Windows::Forms::ComboBox^>^ comboboxes{ sheetComboboxes... };
	std::vector<std::string> contents{};
	std::string line{}, word{}, fullCombobox{};

	// Create file stream and open CSV file.
	std::ifstream file;
	file.open(filepath, std::ios::in);

	// Loop through each line of CSV file.
	while (getline(file, line))
	{
		std::stringstream str(line);
		fullCombobox = "";

		// Loop through each word within the line.
		while (getline(str, word, '^'))
		{
			fullCombobox += word;
		}
		contents.push_back(fullCombobox);
	}

	// Copy into comboboxes.
	for (int i = 0; i < contents.size(); i++)
	{
		String^ newStr = gcnew String(contents[i].c_str());
		comboboxes[i]->Text = newStr;
		delete newStr;
	}
	
	file.close();
}
template<typename CSVfilepath, typename multiTextbox> void readMultiTextboxFromCSV(CSVfilepath filepath, multiTextbox sheetTextbox)
{
	// Initialize variables and vectors.
	std::vector<std::string> contents = {};
	std::string line{}, word{}, fullTextbox{};

	// Create file stream and open CSV file.
	std::ifstream file;
	file.open(filepath, std::ios::in);

	// Loop through each line of CSV file.
	while (getline(file, line))
	{
		std::stringstream str(line);
		fullTextbox = "";

		// Loop through each word within the line.
		while (getline(str, word))
		{
			fullTextbox += word;
		}
		contents.push_back(fullTextbox);
	}

	// Clear textboxes contents if any present.
	sheetTextbox->Text = "";

	// Copy info into textbox.
	for (int i = 0; i < contents.size(); i++)
	{
		// Check if current line within contents contains only a newline character.
		// If not, then append current line to textbox.
		if (sizeof(contents[i]) / sizeof(char) >= 1)
		{
			String^ newStr = gcnew String(contents[i].c_str());
			sheetTextbox->AppendText(newStr);
			delete newStr;
		}

		// Append newline to textbox for each paragraph except final one.
		if (i < contents.size() - 1)
		{
			sheetTextbox->AppendText(Environment::NewLine);
		}

		file.close();
	}
}
template<typename CSVfilepath, typename spellList> void readSpellToListFromCSV(CSVfilepath filepath, spellList sheetSpellList)
{
	// Initialize variables.
	std::string line{}, word{};

	// Create file stream and open CSV file.
	std::ifstream file;
	file.open(filepath, std::ios::in);

	// Save each element's contents to CSV file.
	// Loop through each line of CSV file.
	while (getline(file, line))
	{
		std::stringstream str(line);
		
		// Loop through each word within the line.
		while (getline(str, word, '^'))
		{
			String^ newStr = gcnew String(word.c_str());
			sheetSpellList->Items->Add(newStr);
			delete newStr;
		}
	}
	file.close();
} 



//
// *** Functions for MyForm.h ***
//

// Create temporary directories for storing data, and copy permanent data to new directories.
void createTempData()
{
	// Create temporary directories.
	std::filesystem::create_directory("Character_Info/temp");
	std::filesystem::create_directory("Spells/temp");
	std::filesystem::create_directory("Spells/temp/Cantrips");
	std::filesystem::create_directory("Spells/temp/1st_Level_Spells");
	std::filesystem::create_directory("Spells/temp/2nd_Level_Spells");
	std::filesystem::create_directory("Spells/temp/3rd_Level_Spells");
	std::filesystem::create_directory("Spells/temp/4th_Level_Spells");
	std::filesystem::create_directory("Spells/temp/5th_Level_Spells");
	std::filesystem::create_directory("Spells/temp/6th_Level_Spells");
	std::filesystem::create_directory("Spells/temp/7th_Level_Spells");
	std::filesystem::create_directory("Spells/temp/8th_Level_Spells");
	std::filesystem::create_directory("Spells/temp/9th_Level_Spells");

	// Copy files over to new directories.
	copyFilesNewDir("Character_Info/saved/CORE", "Character_Info/temp/CORE");
	copyFilesNewDir("Character_Info/saved/BIO", "Character_Info/temp/BIO");
	copyFilesNewDir("Character_Info/saved/SPELLS", "Character_Info/temp/SPELLS");
	copyFilesNewDir("Spells/saved_spells/Cantrips", "Spells/temp/Cantrips");
	copyFilesNewDir("Spells/saved_spells/1st_Level_Spells", "Spells/temp/1st_Level_Spells");
	copyFilesNewDir("Spells/saved_spells/2nd_Level_Spells", "Spells/temp/2nd_Level_Spells");
	copyFilesNewDir("Spells/saved_spells/3rd_Level_Spells", "Spells/temp/3rd_Level_Spells");
	copyFilesNewDir("Spells/saved_spells/4th_Level_Spells", "Spells/temp/4th_Level_Spells");
	copyFilesNewDir("Spells/saved_spells/5th_Level_Spells", "Spells/temp/5th_Level_Spells");
	copyFilesNewDir("Spells/saved_spells/6th_Level_Spells", "Spells/temp/6th_Level_Spells");
	copyFilesNewDir("Spells/saved_spells/7th_Level_Spells", "Spells/temp/7th_Level_Spells");
	copyFilesNewDir("Spells/saved_spells/8th_Level_Spells", "Spells/temp/8th_Level_Spells");
	copyFilesNewDir("Spells/saved_spells/9th_Level_Spells", "Spells/temp/9th_Level_Spells");
}

// Save all temp files to permanent storage.
void createSavedData()
{
	// Copy files to <saved> directories.
	copyFilesNewDir("Character_Info/temp/CORE", "Character_Info/saved/CORE");
	copyFilesNewDir("Character_Info/temp/BIO", "Character_Info/saved/BIO");
	copyFilesNewDir("Character_Info/temp/SPELLS", "Character_Info/saved/SPELLS");
	//copyFilesNewDir("Spells/temp", "Spells/saved_spells");

	copyFilesNewDir("Spells/temp/Cantrips", "Spells/saved_spells/Cantrips");
	copyFilesNewDir("Spells/temp/1st_Level_Spells", "Spells/saved_spells/1st_Level_Spells");
	copyFilesNewDir("Spells/temp/2nd_Level_Spells", "Spells/saved_spells/2nd_Level_Spells");
	copyFilesNewDir("Spells/temp/3rd_Level_Spells", "Spells/saved_spells/3rd_Level_Spells");
	copyFilesNewDir("Spells/temp/4th_Level_Spells", "Spells/saved_spells/4th_Level_Spells");
	copyFilesNewDir("Spells/temp/5th_Level_Spells", "Spells/saved_spells/5th_Level_Spells");
	copyFilesNewDir("Spells/temp/6th_Level_Spells", "Spells/saved_spells/6th_Level_Spells");
	copyFilesNewDir("Spells/temp/7th_Level_Spells", "Spells/saved_spells/7th_Level_Spells");
	copyFilesNewDir("Spells/temp/8th_Level_Spells", "Spells/saved_spells/8th_Level_Spells");
	copyFilesNewDir("Spells/temp/9th_Level_Spells", "Spells/saved_spells/9th_Level_Spells");
}

// Delete temporary directory when form closes.
void deleteTempData()
{
	std::filesystem::remove_all("Character_Info/temp");
	std::filesystem::remove_all("Spells/temp");
}

// Get character's current level.
int getCharLevel(System::Windows::Forms::NumericUpDown^ charLevel)
{
	// If no text in character level box, return default value of 1.
	if (charLevel->Text == "") { return 1; }

	// Return current character level.
	else { return System::Convert::ToInt16(charLevel->Value); }
}

// Set character's proficiency bonus.
void setProfBonus(System::Windows::Forms::Label^ profBonus, System::Windows::Forms::NumericUpDown^ charLevel)
{
	// Get character level.
	int level = getCharLevel(charLevel);

	// Set proficiency bonus based on character level.
	if (level >= 1 && level <= 4) { profBonus->Text = "2"; }
	else if (level > 4 && level <= 8) { profBonus->Text = "3"; }
	else if (level > 8 && level <= 12) { profBonus->Text = "4"; }
	else if (level > 12 && level <= 16) { profBonus->Text = "5"; }
	else if (level > 16 && level <= 20) { profBonus->Text = "6"; }
}

// Change TextBox border to None.
void setTextBorderNone(System::Windows::Forms::TextBox^ textbox)
{
	textbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
}

// Change TextBox border to FixedSingle.
void setTextBorderFixedSingle(System::Windows::Forms::TextBox^ textbox)
{
	textbox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
}

// Change Label border to None.
void setLabelBorderNone(System::Windows::Forms::Label^ label)
{
	label->BorderStyle = System::Windows::Forms::BorderStyle::None;
}

// Change Label border to FixedSingle.
void setLabelBorderFixedSingle(System::Windows::Forms::Label^ label)
{
	label->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
}

// Change TextBox contents to be blank.
void setTextBoxContentsBlank(System::Windows::Forms::TextBox^ textbox)
{
	textbox->Text = "";
}

// Change Label contents to be blank.
void setLabelContentsBlank(System::Windows::Forms::Label^ label)
{
	label->Text = "";
}

// Set ability modifier.
void setAbilityMod(System::Windows::Forms::TextBox^ scoreAbility, System::Windows::Forms::Label^ modAbility)
{
	// Check if ability score has a value.
	if (scoreAbility->Text == "")
	{
		return;
	}

	// Set base ability modifier.
	int mod = -5;

	// Get ability score.
	int score = System::Convert::ToInt16(scoreAbility->Text);

	// Check if scoreAbility is a multiple of 2.
	if (score % 2 != 0) { score -= 1; }

	// Calculate and set new ability mod.
	int newMod = mod + score / 2;
	modAbility->Text = System::Convert::ToString(newMod);
}

// Get ability modifier.
int getAbilityMod(System::Windows::Forms::Label^ modAbility)
{
	return System::Convert::ToInt16(modAbility->Text);
}

// Set modifier for saving throw based on ability mod and proficiency.
void setSaveMod(System::Windows::Forms::Label^ modAbility, System::Windows::Forms::Label^ saveName, System::Windows::Forms::CheckBox^ profCheck, System::Windows::Forms::Label^ profBonus)
{
	int saveMod = getAbilityMod(modAbility);

	// Check if saving throw is proficient, then update throw value.
	if (getProficiency(profCheck) == true)
	{
		saveMod += System::Convert::ToInt16(profBonus->Text);
	}

	// Set save mod.
	saveName->Text = System::Convert::ToString(saveMod);
}

// Get proficiency.
bool getProficiency(System::Windows::Forms::CheckBox^ profCheck)
{
	return profCheck->Checked;
}

// Set modifier for skill.
void setSkillMod(System::Windows::Forms::Label^ skillName, System::Windows::Forms::CheckBox^ skillProf, System::Windows::Forms::Label^ abilityMod, System::Windows::Forms::Label^ profBonus)
{
	// Get related ability modifier.
	int mod = System::Convert::ToInt16(abilityMod->Text);

	// Check if proficient in skill.
	if (getProficiency(skillProf) == true)
	{
		mod += getProfBonus(profBonus);
	}
	skillName->Text = System::Convert::ToString(mod);
}

// Get character's proficiency bonus.
int getProfBonus(System::Windows::Forms::Label^ profBonus)
{
	return System::Convert::ToInt16(profBonus->Text);
}

// Set passive perception.
void setPassPerception(System::Windows::Forms::Label^ passPerception, System::Windows::Forms::Label^ modWIS)
{
	passPerception->Text = System::Convert::ToString(System::Convert::ToInt16(modWIS->Text));
}

// Update save proficiency and modifier based on checkbox.
void profSaveUpdated(System::Windows::Forms::CheckBox^ profCheckBox, System::Windows::Forms::Label^ save, System::Windows::Forms::Label^ profBonus)
{
	int profMod{};
	int saveMod{};

	// Initialize variables.
	if (save->Text == "")
	{
		return;
	}
	else
	{
		profMod = System::Convert::ToInt16(profBonus->Text);
		saveMod = System::Convert::ToInt16(save->Text);

		// Change save value based on check state.
		if (profCheckBox->Checked == false)
		{
			saveMod -= profMod;
			save->Text = System::Convert::ToString(saveMod);
		}
		else
		{
			saveMod += profMod;
			save->Text = System::Convert::ToString(saveMod);
		}
	}
}

// Update skill proficiency and modifier based on checkbox.
void profSkillCheckUpdated(System::Windows::Forms::CheckBox^ profCheckBox, System::Windows::Forms::Label^ skill, System::Windows::Forms::Label^ profBonus) {

	int profMod{};
	int skillMod{};

	// Initialize variables.
	if (skill->Text == "")
	{
		return;
	}
	else
	{
		profMod = System::Convert::ToInt16(profBonus->Text);
		skillMod = System::Convert::ToInt16(skill->Text);

		// Change skill check value based on check state.
		if (profCheckBox->Checked == false)
		{
			skillMod -= profMod;
			skill->Text = System::Convert::ToString(skillMod);
		}
		else
		{
			skillMod += profMod;
			skill->Text = System::Convert::ToString(skillMod);
		}
	}
}

// Get type of die from a string formatted "D##".
int getDieType(System::Windows::Forms::ComboBox^ dieType)
{
	// Convert die type to uppercase.
	System::String^ die = dieType->Text;

	// Check type of die that was passed into function.
	if (die == "") { return 4; }
	else if (die == "D4" || die == "d4") { return 4; }
	else if (die == "D6" || die == "d6") { return 6; }
	else if (die == "D8" || die == "d8") { return 8; }
	else if (die == "D10" || die == "d10") { return 10; }
	else if (die == "D12" || die == "d12") { return 12; }
	else if (die == "D20" || die == "d20") { return 20; }
	else if (die == "D100" || die == "d100") { return 100; }
	else { return 4; }
}

// Set maximum number of hit die available based on character level.
void setMaxNumberHitDie(System::Windows::Forms::ComboBox^ hitDieType, System::Windows::Forms::NumericUpDown^ charLevel, System::Windows::Forms::NumericUpDown^ currentNumHitDie)
{
	// Get character level.
	int level = getCharLevel(charLevel);

	// Update maximum allowable value for currentNumHitDie,.
	currentNumHitDie->Maximum = level;
	setCurrentHitDieToMax(currentNumHitDie);
}

// Set number of available hit die to their current maximum value.
void setCurrentHitDieToMax(System::Windows::Forms::NumericUpDown^ currentNumHitDie)
{
	currentNumHitDie->Value = currentNumHitDie->Maximum;
}

// Calculate maximum number of hit points for character.
int calcMaxHitPoints(System::Windows::Forms::ComboBox^ hitDieType, System::Windows::Forms::NumericUpDown^ charLevel, System::Windows::Forms::Label^ modCON)
{
	// Get relevant values.
	int hitDie{ getDieType(hitDieType) };
	int level{ getCharLevel(charLevel) };
	int mod_CON{};

	// Set default value for CON modifier if none has been set.
	if (modCON->Text == "") { mod_CON = 0; }
	else { mod_CON = getAbilityMod(modCON); }

	// Calculate hit points granted by first level.
	// Hit points at level 1 = max hit die value + CON modifier.
	int maxHitPoints = hitDie + mod_CON;

	// If character is greater than level 1, recalculate additional hit points.
	if (level > 1)
	{
		maxHitPoints += calcHitPointsAfterLevel1(hitDie, level, mod_CON);
	}
	return maxHitPoints;
}

// Calculate hit points added to maximum hit points for every level after first.
int calcHitPointsAfterLevel1(int hitDie, int level, int mod_CON)
{
	int levelsToCalc{ level - 1 };
	int hitPointsAfterLevel1{ 0 };

	// Portion of calculation requiring hit die.
	int hitDiePortion = std::ceil(hitDie / 2) + 1;

	// Separate calculation into separate portions.
	for (int i = 0; i < levelsToCalc; i++)
	{
		hitPointsAfterLevel1 += hitDiePortion + mod_CON;
	}

	return hitPointsAfterLevel1;
}

// Set maximum number of hit points for character.
void setMaxHitPoints(System::Windows::Forms::ComboBox^ hitDieType, System::Windows::Forms::NumericUpDown^ charLevel, System::Windows::Forms::Label^ modCON, System::Windows::Forms::TextBox^ maxHitPoints)
{
	int maxHP = calcMaxHitPoints(hitDieType, charLevel, modCON);
	maxHitPoints->Text = System::Convert::ToString(maxHP);
}

// Set character's current hit points to max value.
void setCurrentHitPointsToMax(System::Windows::Forms::NumericUpDown^ currentHitPoints, System::Windows::Forms::TextBox^ maxHitPoints)
{
	// Get current max hit points.
	int maxHP = System::Convert::ToInt16(maxHitPoints->Text);

	// Update maximum allowable value for current hit points.
	currentHitPoints->Maximum = maxHP;

	// Set current hit points to maximum value.
	currentHitPoints->Value = currentHitPoints->Maximum;
}

// Set character initiative for combat.
void setInitiative(System::Windows::Forms::TextBox^ initiative, System::Windows::Forms::Label^ modDEX)
{
	// Get DEX modifier.
	int mod_DEX = getAbilityMod(modDEX);

	// Set initiative based on DEX modifier.
	initiative->Text = System::Convert::ToString(mod_DEX);
}

// Set a NumericUpDown's value to zero.
void setNumericUpDownZero(System::Windows::Forms::NumericUpDown^ numericUpDown)
{
	numericUpDown->Value = 0;
}

// Add new spell to appropriate spell list.
void addSpellToList(std::string listToAddSpell,
	System::String^ tempSpell,
	System::Windows::Forms::ListBox^ listCantrips,
	System::Windows::Forms::ListBox^ list1stLevelSpells,
	System::Windows::Forms::ListBox^ list2ndLevelSpells,
	System::Windows::Forms::ListBox^ list3rdLevelSpells,
	System::Windows::Forms::ListBox^ list4thLevelSpells,
	System::Windows::Forms::ListBox^ list5thLevelSpells,
	System::Windows::Forms::ListBox^ list6thLevelSpells,
	System::Windows::Forms::ListBox^ list7thLevelSpells,
	System::Windows::Forms::ListBox^ list8thLevelSpells,
	System::Windows::Forms::ListBox^ list9thLevelSpells)
{
	if (listToAddSpell == "Cantrip") { readSpellListCSV_ToProperList("Spells/temp/Cantrips/Cantrip Spells.txt", listCantrips); }
	else if (listToAddSpell == "1st Level") { readSpellListCSV_ToProperList("Spells/temp/1st_Level_Spells/1st Level Spells.txt", list1stLevelSpells); }
	else if (listToAddSpell == "2nd Level") { readSpellListCSV_ToProperList("Spells/temp/2nd_Level_Spells/2nd Level Spells.txt", list2ndLevelSpells); }
	else if (listToAddSpell == "3rd Level") { readSpellListCSV_ToProperList("Spells/temp/3rd_Level_Spells/3rd Level Spells.txt", list3rdLevelSpells); }
	else if (listToAddSpell == "4th Level") { readSpellListCSV_ToProperList("Spells/temp/4th_Level_Spells/4th Level Spells.txt", list4thLevelSpells); }
	else if (listToAddSpell == "5th Level") { readSpellListCSV_ToProperList("Spells/temp/5th_Level_Spells/5th Level Spells.txt", list5thLevelSpells); }
	else if (listToAddSpell == "6th Level") { readSpellListCSV_ToProperList("Spells/temp/6th_Level_Spells/6th Level Spells.txt", list6thLevelSpells); }
	else if (listToAddSpell == "7th Level") { readSpellListCSV_ToProperList("Spells/temp/7th_Level_Spells/7th Level Spells.txt", list7thLevelSpells); }
	else if (listToAddSpell == "8th Level") { readSpellListCSV_ToProperList("Spells/temp/8th_Level_Spells/8th Level Spells.txt", list8thLevelSpells); }
	else if (listToAddSpell == "9th Level") { readSpellListCSV_ToProperList("Spells/temp/9th_Level_Spells/9th Level Spells.txt", list9thLevelSpells); }
	else { return; }

	listToAddSpell = "";
}

void readSpellListCSV_ToProperList(std::string filepath, System::Windows::Forms::ListBox^ spellList)
{
	spellList->Items->Clear();
	readSpellToListFromCSV(filepath, spellList);
}

// Set textboxes to blank.
template<typename... textbox> void setTextboxBlank(textbox... sheetTextboxes)
{
	// Initialize array and fill with textboxes.
	cli::array<System::Windows::Forms::TextBox^>^ textboxes{ sheetTextboxes... };

	// Loop through list of textboxes and set them to be blank.
	for (int i = 0; i < textboxes->Length; i++)
	{
		textboxes[i]->Text = "";
	}
}

// Unchecks passed in checkbox objects.
template<typename... checkbox> void setCheckboxesUnchecked(checkbox... sheetCheckboxes)
{
	// Initialize array of checkboxes.
	cli::array<System::Windows::Forms::CheckBox^>^ checkboxes{ sheetCheckboxes... };

	// Loop through list of checkboxes and set them all to unchecked.
	for (int i = 0; i < checkboxes->Length; i++)
	{
		checkboxes[i]->Checked = false;
	}
}



//
// *** Functions for spellAddPopUp.h
//

// Get spell level for spell being added to spell book.
std::string getSpellLevelFilePath(System::Windows::Forms::ComboBox^ dropdownSpellLevel)
{
	// Convert text from dropdownSpellLevel into a string.
	std::string standardSpellLevel = MarshalString(dropdownSpellLevel->Text);

	// Check spell level and return the appropriate string.
	if (standardSpellLevel == "Cantrips" || standardSpellLevel == "Cantrip") { return "Spells/temp/Cantrips"; }
	else if (standardSpellLevel == "1st Level Spells" || standardSpellLevel == "1st Level Spell" || standardSpellLevel == "1st Level") { return "Spells/temp/1st_Level_Spells"; }
	else if (standardSpellLevel == "2nd Level Spells" || standardSpellLevel == "2nd Level Spell" || standardSpellLevel == "2nd Level") { return "Spells/temp/2nd_Level_Spells"; }
	else if (standardSpellLevel == "3rd Level Spells" || standardSpellLevel == "3rd Level Spell" || standardSpellLevel == "3rd Level") { return "Spells/temp/3rd_Level_Spells"; }
	else if (standardSpellLevel == "4th Level Spells" || standardSpellLevel == "4th Level Spell" || standardSpellLevel == "4th Level") { return "Spells/temp/4th_Level_Spells"; }
	else if (standardSpellLevel == "5th Level Spells" || standardSpellLevel == "5th Level Spell" || standardSpellLevel == "5th Level") { return "Spells/temp/5th_Level_Spells"; }
	else if (standardSpellLevel == "6th Level Spells" || standardSpellLevel == "6th Level Spell" || standardSpellLevel == "6th Level") { return "Spells/temp/6th_Level_Spells"; }
	else if (standardSpellLevel == "7th Level Spells" || standardSpellLevel == "7th Level Spell" || standardSpellLevel == "7th Level") { return "Spells/temp/7th_Level_Spells"; }
	else if (standardSpellLevel == "8th Level Spells" || standardSpellLevel == "8th Level Spell" || standardSpellLevel == "8th Level") { return "Spells/temp/8th_Level_Spells"; }
	else { return "Spells/temp/9th_Level_Spells"; }
}

// Append line to spell CSV file.
template <typename key, typename value> void appendSpellCSV(key spellFieldName, value spellFieldValue, std::ofstream& file)
{
	file << spellFieldName << "," << spellFieldValue << "\n";
}



//
// *** Functions for ExpandListSpells.h
//

// Initialize all of form's fields.
template<typename spellsList, typename listSpellLevel, typename matCompText, typename descriptionText, typename higherLevelsText, typename... label> void initializeSpellsList(spellsList sheetSpellsList, listSpellLevel sheetListSpellLevel, matCompText sheetMatCompText, descriptionText sheetDescriptionText, higherLevelsText sheetHigherLevelsText, label... sheetLabels)
{
	// Initialize variables and vectors.
	cli::array<System::Windows::Forms::TextBox^>^ textboxes{ sheetMatCompText, sheetDescriptionText, sheetHigherLevelsText };
	cli::array<System::Windows::Forms::Label^>^ labels{ sheetLabels... };

	// Set all text fields to blank.
	for (int i = 0; i < textboxes->Length; i++)
	{
		textboxes[i]->Text = "";
	}

	// Set all label fields to blank.
	for (int i = 0; i < labels->Length; i++)
	{
		labels[i]->Text = "";
	}

	std::string filepath = getSpellListFilepath(sheetListSpellLevel);

	// Read spell names into form.
	readSpellToListFromCSV(filepath, sheetSpellsList);
}

// Return filepath for list of spells based on level.
std::string getSpellListFilepath(System::Windows::Forms::ComboBox^ spellListLevel)
{
	if (spellListLevel->Text == "Cantrips") { return "Spells/temp/Cantrips/Cantrip Spells.txt"; }
	else if (spellListLevel->Text == "1st Level Spells") { return "Spells/temp/1st_Level_Spells/1st Level Spells.txt"; }
	else if (spellListLevel->Text == "2nd Level Spells") { return "Spells/temp/2nd_Level_Spells/2nd Level Spells.txt"; }
	else if (spellListLevel->Text == "3rd Level Spells") { return "Spells/temp/3rd_Level_Spells/3rd Level Spells.txt"; }
	else if (spellListLevel->Text == "4th Level Spells") { return "Spells/temp/4th_Level_Spells/4th Level Spells.txt"; }
	else if (spellListLevel->Text == "5th Level Spells") { return "Spells/temp/5th_Level_Spells/5th Level Spells.txt"; }
	else if (spellListLevel->Text == "6th Level Spells") { return "Spells/temp/6th_Level_Spells/6th Level Spells.txt"; }
	else if (spellListLevel->Text == "7th Level Spells") { return "Spells/temp/7th_Level_Spells/7th Level Spells.txt"; }
	else if (spellListLevel->Text == "8th Level Spells") { return "Spells/temp/8th_Level_Spells/8th Level Spells.txt"; }
	else { return "Spells/temp/9th_Level_Spells/9th Level Spells.txt"; }
}

// Delete spell list's collection of items.
void clearSpellsList(System::Windows::Forms::ListBox^ listSpells)
{
	listSpells->Items->Clear();
}

// Recursively copies files / directories for spells from one directory to another, and overwrites any files / directories present in target location.
void copyFilesNewDir(const std::filesystem::path& src, const std::filesystem::path& target) noexcept
{
	try
	{
		std::filesystem::copy(src, target, std::filesystem::copy_options::overwrite_existing | std::filesystem::copy_options::recursive);
	}
	catch (std::exception& e)
	{
		std::cout << e.what();
	}
}

// Fill in labels for ExpandListSpells.h
// Arguments after spell name, spell level, materialsTextbox, descriptionTextbox, and atHigherLevelsTextbox are all labels, and in exact order:
// spell level, spell school, spellcasting ability, ritual, verbal, semantic, material, concentration, spell name, casting time, range, duration, target.
template<typename spellName, typename spellLevel, typename materialsTextbox, typename descriptionTextbox, typename atHigherLevelsTextbox, typename... label> void readSpellLabelFromCSV(spellName currentSpellName, spellLevel currentSpellLevel, materialsTextbox sheetMaterialsTextbox, descriptionTextbox sheetDescriptionTextbox, atHigherLevelsTextbox sheetAtHigherLevelsTextbox, label... sheetLabels)
{

	// Initialize variables and vectors.
	cli::array<System::Windows::Forms::Label^>^ labels{ sheetLabels... };
	std::vector<std::string> contents = {};
	std::string line{}, word{}, fullLabel{};
	std::string spellDetails{}, spellMaterials{}, spellAtHigherLevels{};
	std::string spellDir{}, spellFilepath{}, detailsFilepath{}, atHigherLevelsFilepath{}, materialsFilepath{};

	// Get directory for currently selected spell level.
	spellDir = getSpellLevelFilePath(currentSpellLevel) + "/" + MarshalString(currentSpellName);

	// Create filepaths for all relevant files.
	spellFilepath = spellDir + "/" + MarshalString(currentSpellName) + ".txt";
	detailsFilepath = spellDir + "/Details.txt";
	atHigherLevelsFilepath = spellDir + "/At Higher Levels.txt";
	materialsFilepath = spellDir + "/Materials.txt";

	// Create file stream spell file.
	std::ifstream file;
	file.open(spellFilepath, std::ios::in);

	// Loop through each line of CSV file.
	while (getline(file, line))
	{
		std::stringstream str(line);
		fullLabel = "";

		// Loop through each word within the line.
		while (getline(str, word, '^'))
		{
			fullLabel += word;
		}
		contents.push_back(fullLabel);
	}

	file.close();

	// Combobox labels contained in indices 0 - 2.
	// Checkbox labels contained in indices 3 - 7.
	// Textbox labels contained in indices 8 - 12.
	// Copy info into each of their respective labels.
	for (int i = 0; i < 3; i++)
	{
		String^ newStr = gcnew String(contents[i].c_str());
		labels[i]->Text = newStr;
		delete newStr;
	}
	for (int i = 3; i < 8; i++)
	{
		String^ newStr = gcnew String(contents[i].c_str());
		labels[i]->Text = newStr;
		delete newStr;
	}
	for (int i = 8; i < 12; i++)
	{
		String^ newStr = gcnew String(contents[i].c_str());
		labels[i]->Text = newStr;
		delete newStr;
	}

	// Copy info for multiline textboxes from CSV files.
	readMultiTextboxFromCSV(materialsFilepath, sheetMaterialsTextbox);
	readMultiTextboxFromCSV(detailsFilepath, sheetDescriptionTextbox);
	readMultiTextboxFromCSV(atHigherLevelsFilepath, sheetAtHigherLevelsTextbox);
}

// Change checkbox label from true/false to "Ritual/Concentration/Material/Semantic/Verbal" or make label invisible.
void modifySpellLabel(System::Windows::Forms::Label^ spellLabel, std::string fieldName)
{
	if (spellLabel->Text == "true")
	{
		spellLabel->Visible = true;

		System::String^ newStr = gcnew System::String(fieldName.c_str());
		spellLabel->Text = newStr;
		delete newStr;
	}
	else
	{
		spellLabel->Visible = false;
	}
}

// Checks if spell name currently exists within the selected list.
void checkSpellNameInList(std::string filepath, std::string spellName)
{
	// Initialize variables.
	std::string line{}, word{};
	bool spellListSearch{ true };

	// Create new file stream and open CSV file.
	std::fstream file;
	file.open(filepath, std::ios::in);

	// Loop through spells list.
	while (getline(file, line) && spellListSearch == true)
	{
		std::stringstream str(line);

		if (line == spellName + "^")
		{
			spellListSearch = false;
		}
	}
	file.close();

	// If spell name not in list, open file in append mode and add spell name.
	// Close file when done.
	if (spellListSearch == true)
	{
		file.open(filepath, std::ios::app);
		file << spellName << "^\n";
		file.close();
	}
}

// Delete selected spell from spell level list CSV file.
void deleteSpellFromCharacter(std::string filepath, std::string selectedSpellName)
{
	// Initialize variables and vectors.
	std::vector<std::string> contents{};
	std::string line{}, word{}, fullLine{};

	// Create file stream and open CSV file in read mode.
	std::fstream file;
	file.open(filepath, std::ios::in);

	// Loop through CSV file and copy contents to vector.
	while (getline(file, line))
	{
		fullLine = "";
		std::stringstream str(line);

		while (getline(str, word, '^'))
		{
			fullLine += word;
		}
		contents.push_back(fullLine);
	}
	file.close();

	// Open CSV file in write mode.
	file.open(filepath, std::ios::out);

	// Loop through contents.
	// Overwrite CSV file with all of contents EXCEPT spell to be deleted.
	for (int i = 0; i < contents.size(); i++)
	{
		if (contents[i] != selectedSpellName) { file << contents[i] << "^\n"; }
		else { continue; }
	}
	file.close();
}

// Delete all files related to spell.
void deleteSpellInfo(System::Windows::Forms::ComboBox^ spellLevelCombobox, std::string selectedSpellName)
{
	std::string spellDirectory = getSpellLevelFilePath(spellLevelCombobox) + "/" + selectedSpellName;
	std::filesystem::remove_all(spellDirectory);
}

// Dynamically resize list of spells based on number of items within list.
void adjustSizeSpellsList(System::Windows::Forms::ListBox^ listSpells)
{
	int numSpells = listSpells->Items->Count;
	int listHeight = 24 + (numSpells - 1) * 20;
	listSpells->Size = System::Drawing::Size(312, listHeight);
}

// Clears spell files from temporary spell directory.
void resetTempSpellDirectory()
{
	// Initialize vectors of directory and file paths.
	std::vector<std::string> dirPath{
		"Spells/temp/Cantrips",
		"Spells/temp/1st_Level_Spells",
		"Spells/temp/2nd_Level_Spells",
		"Spells/temp/3rd_Level_Spells",
		"Spells/temp/4th_Level_Spells",
		"Spells/temp/5th_Level_Spells",
		"Spells/temp/6th_Level_Spells",
		"Spells/temp/7th_Level_Spells",
		"Spells/temp/8th_Level_Spells",
		"Spells/temp/9th_Level_Spells"
	};

	std::vector<std::string> filepath{
		"Spells/temp/Cantrips/Cantrip Spells.txt",
		"Spells/temp/1st_Level_Spells/1st Level Spells.txt",
		"Spells/temp/2nd_Level_Spells/2nd Level Spells.txt",
		"Spells/temp/3rd_Level_Spells/3rd Level Spells.txt",
		"Spells/temp/4th_Level_Spells/4th Level Spells.txt",
		"Spells/temp/5th_Level_Spells/5th Level Spells.txt",
		"Spells/temp/6th_Level_Spells/6th Level Spells.txt",
		"Spells/temp/7th_Level_Spells/7th Level Spells.txt",
		"Spells/temp/8th_Level_Spells/8th Level Spells.txt",
		"Spells/temp/9th_Level_Spells/9th Level Spells.txt",
	};

	// Recursively delete files from each of the spell level directory.
	for (int i = 0; i < dirPath.size(); i++)
	{
		for (const auto& entry : std::filesystem::directory_iterator(dirPath[i]))
		{
			std::filesystem::remove_all(entry.path());
		}
	}

	// Recreate spells list text files.
	for (int i = 0; i < filepath.size(); i++)
	{
		std::ofstream outfile(filepath[i]);
	}
}