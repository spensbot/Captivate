/*
  ==============================================================================

    GuiHeader.cpp
    Created: 19 May 2019 10:47:05am
    Author:  Spenser

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "GuiHeader.h"

//==============================================================================
GuiHeader::GuiHeader()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.
	addAndMakeVisible(componentBPM);

}

GuiHeader::~GuiHeader()
{
}

void GuiHeader::paint (Graphics& g)
{
   
}

void GuiHeader::resized()
{
	Grid grid;
	using Track = Grid::TrackInfo;
	grid.templateRows = { Track(1_fr) };
	grid.templateColumns = { Track(1_fr), Track(2_fr), Track(1_fr) };
	grid.items = { GridItem(componentBPM) };
	grid.performLayout(getLocalBounds());
}
