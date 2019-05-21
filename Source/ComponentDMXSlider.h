/*
  ==============================================================================

    ComponentDMXSlider.h
    Created: 19 May 2019 11:24:46pm
    Author:  Spenser

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class ComponentDMXSlider    : public Component
{
public:
    ComponentDMXSlider(int _channelId);
    ~ComponentDMXSlider();

    void paint (Graphics&) override;
    void resized() override;

private:
	Slider channelSlider;
	int channelId;
	Label channelLabel;
	ShapeButton* velocityButton;
	ShapeButton* adsrButton;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ComponentDMXSlider)
};
