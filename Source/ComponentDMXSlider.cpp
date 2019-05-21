/*
  ==============================================================================

    ComponentDMXSlider.cpp
    Created: 19 May 2019 11:24:46pm
    Author:  Spenser

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "ComponentDMXSlider.h"

//==============================================================================
ComponentDMXSlider::ComponentDMXSlider(int _channelId) : channelId(_channelId)
{
	velocityButton = new ShapeButton(String("hello"), Colours::aliceblue, Colours::beige, Colours::crimson);
	adsrButton = new ShapeButton(String("hello"), Colours::aliceblue, Colours::beige, Colours::crimson);

	addAndMakeVisible(channelSlider);
	channelSlider.setTextBoxStyle(Slider::NoTextBox, true, 0, 0);
	channelSlider.setSliderStyle(Slider::LinearBarVertical);
	channelSlider.setPopupDisplayEnabled(true, false, this);
	channelSlider.setRange(0, 255, 1);

	addAndMakeVisible(channelLabel);
	channelLabel.setText(String(channelId), dontSendNotification);
	channelLabel.setJustificationType(Justification::centred);

	addAndMakeVisible(velocityButton);
	Path path;
	path.addRectangle(0, 0, 10, 10);
	velocityButton->setShape(path, true, true, false);
	adsrButton->setShape(path, true, true, false);

	addAndMakeVisible(adsrButton);
}

ComponentDMXSlider::~ComponentDMXSlider()
{
}

void ComponentDMXSlider::paint (Graphics& g)
{
    
}

void ComponentDMXSlider::resized()
{
	int labelHeight = 15;
	int lowerHeight = 15;

	auto r = getLocalBounds();
	channelLabel.setBounds(r.removeFromTop(labelHeight));
	channelSlider.setBounds(r.removeFromTop(r.getHeight() - lowerHeight));
	velocityButton->setBounds(r.removeFromLeft(r.getWidth() / 2));
	adsrButton->setBounds(r);
}
