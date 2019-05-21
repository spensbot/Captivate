/*
  ==============================================================================

    ComponentGraph.h
    Created: 20 May 2019 10:55:34pm
    Author:  Spenser

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "CaptivateParams.h"

//==============================================================================
/*
*/
class ComponentGraph    : public Component
{
public:
    ComponentGraph();
    ~ComponentGraph();

    void paint (Graphics&) override;
    void resized() override;
	void calculatePath(float waveType, float waveAmp);

private:
	Path lfoPath;

	float stepSize = 0.05;

	//The following functions calculate the following waveforms.
	//A full oscillation occurs from 0 to 2pi.
	float calculateSquare(float phase);
	float calculateSin(float phase);
	float calculateTri(float phase);

	//Calculates the weighted average of val1 and val2 based on the val1 weighting (ratio1)
	float calculateWeightedAvg(float val1, float ratio1, float val2);

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ComponentGraph)
};
