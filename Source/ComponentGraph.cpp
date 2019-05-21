/*
  ==============================================================================

    ComponentGraph.cpp
    Created: 20 May 2019 10:55:34pm
    Author:  Spenser

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "ComponentGraph.h"

//==============================================================================
ComponentGraph::ComponentGraph()
{
}

ComponentGraph::~ComponentGraph()
{
}

void ComponentGraph::paint (Graphics& g)
{
    /* This demo code just fills the component's background and
       draws some placeholder text to get you started.

       You should replace everything in this method with your own
       drawing code..
    */

    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));   // clear the background

    g.setColour (Colours::white);
	g.strokePath(lfoPath, PathStrokeType(2));
}

void ComponentGraph::resized()
{
	
	auto r = getLocalBounds();
	lfoPath.scaleToFit(0, 0, r.getWidth(), r.getHeight(), false);
}

void ComponentGraph::calculatePath(float waveType, float waveAmp)
{
	lfoPath.clear();
	//iterate through an entire period
	for (float phase = 0; phase < 2 * PI_F; phase += stepSize) {
		float amplitude;

		if (waveType == -1) {
			amplitude = calculateSquare(phase);
		}
		else if (waveType == 0) {
			amplitude = calculateSin(phase);
		}
		else if (waveType == 1) {
			amplitude = calculateTri(phase);
		}
		else if (waveType < 0) {
			amplitude = calculateWeightedAvg(calculateSquare(phase), -waveType, calculateSin(phase));
		}
		else if (waveType > 0) {
			amplitude = calculateWeightedAvg(calculateTri(phase), waveType, calculateSin(phase));
		}

		amplitude = amplitude * waveAmp;

		lfoPath.lineTo(phase, amplitude);
	}
	auto r = getLocalBounds();
	lfoPath.scaleToFit(0, 0, r.getWidth(), r.getHeight(), false);
	repaint();
}

float ComponentGraph::calculateSquare(float phase) {
	if (phase < PI_F) return 1.0;
	else return -1.0;
}

float ComponentGraph::calculateSin(float phase) {
	return std::sin(phase);
}

float ComponentGraph::calculateTri(float phase) {
	return -(phase-PI_F) / PI_F;
}

float ComponentGraph::calculateWeightedAvg(float val1, float ratio1, float val2) {
	return (val1 * ratio1) + val2 * (1 - ratio1);
}