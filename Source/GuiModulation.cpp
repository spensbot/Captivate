/*
  ==============================================================================

    GuiModulation.cpp
    Created: 19 May 2019 10:47:54am
    Author:  Spenser

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "GuiModulation.h"
#include "CaptivateParams.h"

//==============================================================================
GuiModulation::GuiModulation()
{
	addAndMakeVisible(componentLfo1);
}

GuiModulation::~GuiModulation()
{
}

void GuiModulation::paint (Graphics& g)
{
    /* This demo code just fills the component's background and
       draws some placeholder text to get you started.

       You should replace everything in this method with your own
       drawing code..
    */

    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));   // clear the background

    g.setColour (Colours::grey);
    g.drawRect (getLocalBounds(), 1);   // draw an outline around the component

    g.setColour (Colours::white);
    g.setFont (14.0f);
    g.drawText ("GuiModulation", getLocalBounds(),
                Justification::centred, true);   // draw some placeholder text
}

void GuiModulation::resized()
{
	Grid grid;
	using Track = Grid::TrackInfo;
	grid.templateRows = { Track(1_fr) };
	grid.templateColumns = { Track(1_fr), Track(1_fr), Track(1_fr), Track(1_fr) };
	grid.items = { GridItem(componentLfo1) };
	grid.performLayout(getLocalBounds().reduced(PADDING_3));

}
