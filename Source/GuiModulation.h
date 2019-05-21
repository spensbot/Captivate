/*
  ==============================================================================

    GuiModulation.h
    Created: 19 May 2019 10:47:54am
    Author:  Spenser

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class GuiModulation    : public Component
{
public:
    GuiModulation();
    ~GuiModulation();

    void paint (Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (GuiModulation)
};
