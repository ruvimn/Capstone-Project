/*
  ==============================================================================

    DistortionEffect.cpp
    Created: 11 Apr 2018 4:46:22pm
    Author:  Ruvim

  ==============================================================================
*/

#include "DistortionEffect.h"
#include "PluginEditor.h"
#include "PluginProcessor.h"

DistortionEffect::DistortionEffect() {
	//Default settings
	setInputGain(1.0f); //default value
	setOutputGain(1.0f); //default value
}

DistortionEffect::~DistortionEffect() {}

//Set functions
void DistortionEffect::setInputGain(float gain) {
	inputGain = gain;
}

void DistortionEffect::setOutputGain(float gain) {
	outputGain = gain;
}

void DistortionEffect::setDrive(float drive) {
	Drive = drive;
}

//Use functions
void DistortionEffect::applyInputGain(float *leftSample, float *rightSample) {
	//Apply input gain.
	*leftSample = *leftSample * getInputGain();
	*rightSample = *rightSample * getInputGain();
}

void DistortionEffect::applyOutputGain(float *leftSample, float *rightSample) {
	//Apply output gain.
	*leftSample = *leftSample * getOutputGain();
	*rightSample = *rightSample * getOutputGain();
}

//Apply hard clipping (digital clipping)
void DistortionEffect::hardClip(float *leftSample, float *rightSample) {
	//Input gain
	*leftSample = *leftSample * getDrive();
	*rightSample = *rightSample * getDrive();

	if (*leftSample > 1.0f) {
		*leftSample = 1.0f;
	}

	if (*rightSample > 1.0f) {
		*rightSample = 1.0f;
	}

	//Auto gain reduction
	*leftSample = *leftSample * (1 / getDrive());
	*rightSample = *rightSample * (1 / getDrive());
}

//Apply soft clipping using tanh(x).
void DistortionEffect::softClip(float *leftSample, float *rightSample) {
	//Input gain
	*leftSample = *leftSample * getDrive();
	*rightSample = *rightSample * getDrive();

	*leftSample = tanh(*leftSample);
	*rightSample = tanh(*rightSample);

	//Auto gain reduction
	*leftSample = *leftSample * (1 / getDrive());
	*rightSample = *rightSample * (1 / getDrive());
}