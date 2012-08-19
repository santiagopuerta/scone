
// Copyright 2012 The Scone authors.
// See LICENSE for more info.


#ifndef __MUSICPLAYER_H__
#define __MUSICPLAYER_H__

#include "scone/common.h"


class MusicPlayer {
public:
  MusicPlayer();
  ~MusicPlayer();

  void add(sf::Music& track);
  void play();
  void stop();

  void update(float diff);

  void chooseRandom();

  int getCurrent();
  int getSize();
  bool isPlaying();

private:
  DISALLOW_COPY_AND_ASSIGN(MusicPlayer);

  vector <sf::Music*> music;
  int current;
  int size;
  bool playing;

  void next();
};




#endif