/*
  ==============================================================================

    ComponentBPM.h
    Created: 19 May 2019 11:23:58pm
    Author:  Spenser

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "CaptivateParams.h"

//==============================================================================
/*
*/
class ComponentBPM    : public Component, public Slider::Listener
{
public:
    ComponentBPM();
    ~ComponentBPM();

    void paint (Graphics&) override;
    void resized() override;
	void sliderValueChanged(Slider* slider) override;

private:
	Slider bpmSlider;
	Label bpmLabel;
	Label bpmValue;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ComponentBPM)
};
