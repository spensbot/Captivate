/*
  ==============================================================================

    GuiHelp.h
    Created: 19 May 2019 10:48:11am
    Author:  Spenser

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class GuiHelp    : public Component
{
public:
    GuiHelp();
    ~GuiHelp();

    void paint (Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (GuiHelp)
};
