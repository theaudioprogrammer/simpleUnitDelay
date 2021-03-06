/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"


//==============================================================================
SimpleFeedForwardFilterAudioProcessorEditor::SimpleFeedForwardFilterAudioProcessorEditor (SimpleFeedForwardFilterAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    
    //initialization for a1 Control Slider
    valueControl.setSliderStyle(Slider::SliderStyle::LinearVertical);
    valueControl.setRange(0.0f, 0.49f);
    valueControl.setValue(0.0f);
    valueControl.setTextBoxStyle(Slider::TextBoxBelow, true, 50, 30);
    addAndMakeVisible(&valueControl);
    
    //use slider attachment pointer to link a1Control to processor values
    sliderValue = new AudioProcessorValueTreeState::SliderAttachment (processor.tree, "valueControl", valueControl);
    
    setSize (200, 200);
}

SimpleFeedForwardFilterAudioProcessorEditor::~SimpleFeedForwardFilterAudioProcessorEditor()
{
}

//==============================================================================
void SimpleFeedForwardFilterAudioProcessorEditor::paint (Graphics& g)
{
    //reserve area for title
    Rectangle<int> titleArea (0, 10, getWidth(), 20);
    
    //basic graphic stuff for ui
    g.fillAll (Colours::black);
    g.setColour(Colours::white);
    g.drawText("Unit Delay Z-1", titleArea, Justification::centredTop);
    Rectangle <float> area (25, 25, 150, 150);
    g.setColour(Colours::yellow);
    g.drawRoundedRectangle(area, 20.0f, 2.0f);
}

void SimpleFeedForwardFilterAudioProcessorEditor::resized()
{
    //draw the slider
    valueControl.setBounds(75, 30, 50, 140);
}





