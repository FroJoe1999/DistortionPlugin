/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"


//==============================================================================
Distortion2AudioProcessorEditor::Distortion2AudioProcessorEditor (Distortion2AudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    addAndMakeVisible(driveKnob = new Slider("Drive"));
    driveKnob->setSliderStyle(Slider::Rotary);
    driveKnob->setTextBoxStyle(Slider::NoTextBox, false, 100, 100);
    
    addAndMakeVisible(rangeKnob = new Slider("Range"));
    rangeKnob->setSliderStyle(Slider::Rotary);
    rangeKnob->setTextBoxStyle(Slider::NoTextBox, false, 100, 100);
    
    addAndMakeVisible(blendKnob = new Slider("Blend"));
    blendKnob->setSliderStyle(Slider::Rotary);
    blendKnob->setTextBoxStyle(Slider::NoTextBox, false, 100, 100);
    
    addAndMakeVisible(volumeKnob = new Slider("Range"));
    volumeKnob->setSliderStyle(Slider::Rotary);
    volumeKnob->setTextBoxStyle(Slider::NoTextBox, false, 100, 100);
    
    driveAttachment = new AudioProcessorValueTreeState::SliderAttachment(p.getState(), "drive", *driveKnob);
    rangeAttachment = new AudioProcessorValueTreeState::SliderAttachment(p.getState(), "range", *rangeKnob);
    blendAttachment = new AudioProcessorValueTreeState::SliderAttachment(p.getState(), "blend", *blendKnob);
    volumeAttachment = new AudioProcessorValueTreeState::SliderAttachment(p.getState(),"volume", *volumeKnob);
    
    
    
    setSize (500, 200);
}

Distortion2AudioProcessorEditor::~Distortion2AudioProcessorEditor()
{
}

//==============================================================================
void Distortion2AudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    g.setColour (Colours::white);
    g.setFont (15.0f);
    //g.drawFittedText ("Hello World!", getLocalBounds(), Justification::centred, 1);
    
    g.drawText("Drive", ((getWidth() / 5) * 1) - (100 / 2), (getHeight() / 2 ) + 5, 100, 100, Justification::centred, false);
    //times by 2 to be to push the position to the right and up to four, for the rest of the knobs
    g.drawText("Range", ((getWidth() / 5) * 2) - (100 / 2), (getHeight() / 2 ) + 5, 100, 100, Justification::centred, false);
    g.drawText("Blend", ((getWidth() / 5) * 3) - (100 / 2), (getHeight() / 2 ) + 5, 100, 100, Justification::centred, false);
    g.drawText("Volume", ((getWidth() / 5) * 4) - (100 / 2), (getHeight() / 2 ) + 5, 100, 100, Justification::centred, false);
}

void Distortion2AudioProcessorEditor::resized()
{
    driveKnob->setBounds(((getWidth() / 5) * 1) - (100 / 2 ), (getHeight() / 2) - (100 / 2), 100, 100);
    rangeKnob->setBounds(((getWidth() / 5) * 2) - (100 / 2 ), (getHeight() / 2) - (100 / 2), 100, 100);
    blendKnob->setBounds(((getWidth() / 5) * 3) - (100 / 2 ), (getHeight() / 2) - (100 / 2), 100, 100);
    volumeKnob->setBounds(((getWidth() / 5) * 4) - (100 / 2 ), (getHeight() / 2) - (100 / 2), 100, 100);
    
    
}
