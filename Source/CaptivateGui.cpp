/*
  ==============================================================================

    CaptivateGui.cpp
    Created: 19 May 2019 10:43:58am
    Author:  Spenser

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "CaptivateGui.h"

//==============================================================================
CaptivateGui::CaptivateGui()
{
	setLookAndFeel(&captivateLookAndFeel);
	addAndMakeVisible(guiHeader);
	addAndMakeVisible(guiPads);
	addAndMakeVisible(guiDeck);
	addAndMakeVisible(guiModulation);
	addAndMakeVisible(guiHelp);
}

CaptivateGui::~CaptivateGui()
{
}

void CaptivateGui::paint (Graphics& g)
{
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));   // clear the background

    g.setColour (Colours::grey);
    g.drawRect (getLocalBounds(), 1);   // draw an outline around the component

    g.setColour (Colours::white);
    g.setFont (14.0f);
    g.drawText ("CaptivateGui", getLocalBounds(),
                Justification::centred, true);   // draw some placeholder text
}

void CaptivateGui::resized()
{
	//Uses tools provided in the Juce Rectangle class to partition the window into different GUI sections
	auto r = getLocalBounds();//.reduced(PADDING_1);
	guiHeader.setBounds(r.removeFromTop(HEADER_HEIGHT));
	guiHelp.setBounds(r.removeFromBottom(HELP_HEIGHT));
	guiPads.setBounds(r.removeFromTop(r.getHeight()*PADS_HEIGHT_RATIO));
	guiDeck.setBounds(r.removeFromTop(r.getHeight()*DECK_HEIGHT_RATIO));
	guiModulation.setBounds(r);
}
