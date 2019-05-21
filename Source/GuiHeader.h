/*
  ==============================================================================

    GuiHeader.h
    Created: 19 May 2019 10:47:05am
    Author:  Spenser

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "ComponentBPM.h"

//==============================================================================
/*
*/
class GuiHeader    : public Component
{
public:
    GuiHeader();
    ~GuiHeader();

    void paint (Graphics&) override;
    void resized() override;

private:
	ComponentBPM componentBPM;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (GuiHeader)
};
