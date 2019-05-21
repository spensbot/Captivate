/*
  ==============================================================================

    ComponentPad.h
    Created: 19 May 2019 11:22:28pm
    Author:  Spenser

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "SsComponent.h"

//==============================================================================
/*
*/
class ComponentPad    : public SsComponent
{
public:
	ComponentPad(int id, bool _midiControllable = false, String _helpText = "");
    ~ComponentPad();

    void paint (Graphics&) override;
    void resized() override;

private:
	int id;
	Label padLabel;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ComponentPad)
};
