/*
  ==============================================================================

    GuiDeck.cpp
    Created: 19 May 2019 10:47:37am
    Author:  Spenser

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "GuiDeck.h"

//==============================================================================
GuiDeck::GuiDeck()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.
	for (int dmxChannel = 0; dmxChannel < NUM_DMX_SLIDERS; dmxChannel++) {
		componentDMXSliders.add(new ComponentDMXSlider(dmxChannel));
		addAndMakeVisible(componentDMXSliders.getLast());
	}
}

GuiDeck::~GuiDeck()
{
}

void GuiDeck::paint (Graphics& g)
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
    g.drawText ("GuiDeck", getLocalBounds(),
                Justification::centred, true);   // draw some placeholder text
}

void GuiDeck::resized()
{
	Grid grid;
	grid.templateRows = { Grid::TrackInfo(1_fr) };
	for (int dmxChannel = 0; dmxChannel < componentDMXSliders.size(); dmxChannel++) {
		grid.templateColumns.add(Grid::TrackInfo(1_fr));
		grid.items.add(componentDMXSliders.getUnchecked(dmxChannel));
	}
	grid.setGap(Grid::Px(PADDING_3));
	grid.performLayout(getLocalBounds().reduced(PADDING_3));
}
