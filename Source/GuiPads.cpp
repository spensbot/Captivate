/*
  ==============================================================================

    GuiPads.cpp
    Created: 19 May 2019 10:44:32am
    Author:  Spenser

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "GuiPads.h"

//==============================================================================
GuiPads::GuiPads()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.
	for (int pad = 0; pad < NUM_PADS; pad++) {
		componentPads.add(new ComponentPad(pad));
		addAndMakeVisible(componentPads.getLast());
	}
}

GuiPads::~GuiPads()
{
}

void GuiPads::paint (Graphics& g)
{
    /* This demo code just fills the component's background and
       draws some placeholder text to get you started.

       You should replace everything in this method with your own
       drawing code..
    */
}

void GuiPads::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..
	Grid grid;
	grid.templateRows = { Grid::TrackInfo(1_fr) };
	for (int pad = 0; pad < componentPads.size(); pad++) {
		grid.templateColumns.add(Grid::TrackInfo(1_fr));
		grid.items.add(componentPads.getUnchecked(pad));
	}
	grid.setGap(Grid::Px(PADDING_3));
	grid.performLayout(getLocalBounds().reduced(PADDING_3));
}
