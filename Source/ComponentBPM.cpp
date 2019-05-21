/*
  ==============================================================================

    ComponentBPM.cpp
    Created: 19 May 2019 11:23:58pm
    Author:  Spenser

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "ComponentBPM.h"

//==============================================================================
ComponentBPM::ComponentBPM()
{
	addAndMakeVisible(bpmSlider);
	bpmSlider.setSliderStyle(Slider::LinearBar);
	bpmSlider.setTextBoxStyle(Slider::NoTextBox, true, 0, 0);
	bpmSlider.setRange(30, 300);
	bpmSlider.setValue(90);

	addAndMakeVisible(bpmValue);

	addAndMakeVisible(bpmLabel);
	bpmLabel.setText("BPM", dontSendNotification);
}

ComponentBPM::~ComponentBPM()
{
}

void ComponentBPM::paint (Graphics& g)
{
    
}

void ComponentBPM::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..
	auto r = getLocalBounds().reduced(PADDING_3);
	bpmSlider.setBounds(r.removeFromRight(r.getWidth() *2/3));
	bpmLabel.setBounds(r.removeFromTop(r.getHeight() / 2));
	bpmValue.setBounds(r);
}

void ComponentBPM::sliderValueChanged(Slider* slider)
{
	if (slider == &bpmSlider) {
		bpmValue.setText(String(bpmSlider.getValue(), 0), dontSendNotification);
	}
}