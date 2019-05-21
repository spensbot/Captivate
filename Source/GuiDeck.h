/*
  ==============================================================================

    GuiDeck.h
    Created: 19 May 2019 10:47:37am
    Author:  Spenser

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "ComponentDMXSlider.h"
#include "CaptivateParams.h"

//==============================================================================
/*
*/
class GuiDeck    : public Component
{
public:
    GuiDeck();
    ~GuiDeck();

    void paint (Graphics&) override;
    void resized() override;

private:
	OwnedArray<ComponentDMXSlider> componentDMXSliders;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (GuiDeck)
};
