/*
  ==============================================================================

    DistortionEffect.h
    Created: 11 Apr 2018 4:46:22pm
    Author:  Ruvim

  ==============================================================================
*/

#pragma once

#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

class DistortionEffect {
public:
	// Constructors and Destructor
	DistortionEffect();
	//DistortionEffect(int projectBitDepth);	//to remove
	~DistortionEffect();

	//Get methods

	float getInputGain() {	
		return inputGain;	//part of soft-kneed
	}
	float getOutputGain() {	
		return outputGain;
	}
	float getDrive() {		//variable for distortion
		return Drive;
	}

	//Functions for setting values, used in the PluginProcessor
	void setInputGain(float gain);
	void setOutputGain(float gain);
	void setDrive(float drive);

	//Functions for DSP
	void applyInputGain(float *leftSample, float *rightSample);
	void applyOutputGain(float *leftSample, float *rightSample);
	void hardClip(float *leftSample, float *rightSample);
	void softClip(float *leftSample, float *rightSample);

private:

	float inputGain, outputGain; //Input and output gain. All gain values in linear decimal form, not decibel scale.
	float Drive; //Distortion setting, determines distortion amount
};