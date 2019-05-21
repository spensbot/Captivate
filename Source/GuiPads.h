/*
  ==============================================================================

    GuiPads.h
    Created: 19 May 2019 10:44:32am
    Author:  Spenser

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "ComponentPad.h"

//==============================================================================
/*
*/
class GuiPads    : public Component
{
public:
    GuiPads();
    ~GuiPads();

    void paint (Graphics&) override;
    void resized() override;

private:
	OwnedArray<ComponentPad> componentPads;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (GuiPads)
};
