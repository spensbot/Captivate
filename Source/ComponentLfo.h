/*
  ==============================================================================

    ComponentLfo.h
    Created: 20 May 2019 10:52:00pm
    Author:  Spenser

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "ComponentGraph.h"

//==============================================================================
/*
*/
class ComponentLfo    : public Component
{
public:
    ComponentLfo();
    ~ComponentLfo();

    void paint (Graphics&) override;
    void resized() override;

private:
	Slider waveTypeSlider;
	Slider waveAmplitudeSlider;
	Label lfoLabel;
	ComponentGraph lfoGraph;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ComponentLfo)
};
