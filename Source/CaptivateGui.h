/*
  ==============================================================================

    CaptivateGui.h
    Created: 19 May 2019 10:43:58am
    Author:  Spenser

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "CaptivateLookAndFeel.h"
#include "GuiHeader.h"
#include "GuiPads.h"
#include "GuiDeck.h"
#include "GuiModulation.h"
#include "GuiHelp.h"
#include "CaptivateParams.h"

//==============================================================================
/*
*/
class CaptivateGui    : public Component
{
public:
    CaptivateGui();
    ~CaptivateGui();

    void paint (Graphics&) override;
    void resized() override;

private:
	CaptivateLookAndFeel captivateLookAndFeel;
	GuiHeader guiHeader;
	GuiPads guiPads;
	GuiDeck guiDeck;
	GuiModulation guiModulation;
	GuiHelp guiHelp;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (CaptivateGui)
};
