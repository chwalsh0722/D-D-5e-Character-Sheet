#pragma once

#include <map>
#include <string>


struct character
{
	// Basic character details.
	std::map<std::string, std::string> basicCharDetail
	{
		{"name", ""},
		{"class", ""},
		{"background", ""},
		{"player name", ""},
		{"race",""},
		{"alignment",""},
	};

	// Character combat stats.
	std::map<std::string, int> combatStat
	{
		{"level", 1},
		{"exp", 0},
		{"armor", 10},
		{"initiative", -1},
		{"speed", 30},
		{"current hit points", 6},
		{"total hit points", 6},
		{"hit die", 6},
		{"remaining hit die", 1},
		{"death save success", 0},
		{"death save fail", 0},
	};

	// Character abilities.
	std::map<std::string, int> abilityScore
	{
		{"STR", {}},
		{"DEX", {}},
		{"CON", {}},
		{"INT", {}},
		{"WIS", {}},
		{"CHA", {}},
	};

	// Character ability mods.
	std::map<std::string, int> abilityMod
	{
		{"STR mod", {}},
		{"DEX mod", {}},
		{"CON mod", {}},
		{"INT mod", {}},
		{"WIS mod", {}},
		{"CHA mod", {}},
	};
};

/*
int setAbilityMod(int16_t inputAbilityScore)
{
	int abilityMod = -5;

	// Check if inputAbilityScore is a multiple of 2.
	if (inputAbilityScore % 2 != 0)
	{
		inputAbilityScore -= 1;
	}

	return abilityMod + inputAbilityScore / 2;
};
*/

/*
void profSkillCheckUpdated(System::Windows::Forms::CheckBox^ profCheckBox, System::Windows::Forms::Label^ skill, System::Windows::Forms::Label^ profBonus)
{

	int profMod = System::Convert::ToInt16(profBonus->Text);
	int skillMod = System::Convert::ToInt16(skill->Text);

	// Change skill check value based on check state.
	if (profCheckBox->Checked == true)
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
*/