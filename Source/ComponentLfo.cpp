/*
  ==============================================================================

    ComponentLfo.cpp
    Created: 20 May 2019 10:52:00pm
    Author:  Spenser

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "ComponentLfo.h"

//==============================================================================
ComponentLfo::ComponentLfo()
{
	addAndMakeVisible(waveTypeSlider);
	waveTypeSlider.setTextBoxStyle(Slider::NoTextBox, true, 0, 0);
	waveTypeSlider.setSliderStyle(Slider::LinearBar);
	waveTypeSlider.setRange(-1, 1);
	waveTypeSlider.onValueChange = [this] { lfoGraph.calculatePath(waveTypeSlider.getValue(), waveAmplitudeSlider.getValue()); };
	waveTypeSlider.setValue(0);
	//waveTypeSlider.setPopupDisplayEnabled(true, true, this);
	

	addAndMakeVisible(waveAmplitudeSlider);
	waveAmplitudeSlider.setTextBoxStyle(Slider::NoTextBox, true, 0, 0);
	waveAmplitudeSlider.setSliderStyle(Slider::LinearBarVertical);
	waveAmplitudeSlider.setRange(-1, 1);
	waveAmplitudeSlider.onValueChange = [this] { lfoGraph.calculatePath(waveTypeSlider.getValue(), waveAmplitudeSlider.getValue()); };
	waveAmplitudeSlider.setValue(1);
	//waveAmplitudeSlider.setPopupDisplayEnabled(true, true, this);

	addAndMakeVisible(lfoLabel);
	lfoLabel.setText("LFO 1", dontSendNotification);

	addAndMakeVisible(lfoGraph);
}

ComponentLfo::~ComponentLfo()
{
}

void ComponentLfo::paint (Graphics& g)
{
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));   // clear the background

    g.setColour (Colours::grey);
    g.drawRect (getLocalBounds(), 1);   // draw an outline around the component

    g.setColour (Colours::white);
    g.setFont (14.0f);
    g.drawText ("ComponentLfo", getLocalBounds(),
                Justification::centred, true);   // draw some placeholder text
}

void ComponentLfo::resized()
{
	int labelHeight = 15;
	int sliderHeight = 10;

	auto r = getLocalBounds();
	lfoLabel.setBounds(r.removeFromTop(labelHeight));
	waveTypeSlider.setBounds(r.removeFromTop(sliderHeight));
	waveAmplitudeSlider.setBounds(r.removeFromLeft(sliderHeight));
	lfoGraph.setBounds(r);
}
