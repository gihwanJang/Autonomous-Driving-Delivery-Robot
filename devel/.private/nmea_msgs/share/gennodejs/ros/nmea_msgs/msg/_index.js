
"use strict";

let Gprmc = require('./Gprmc.js');
let Gpgsa = require('./Gpgsa.js');
let GpgsvSatellite = require('./GpgsvSatellite.js');
let Gpgga = require('./Gpgga.js');
let Sentence = require('./Sentence.js');
let Gpgst = require('./Gpgst.js');
let Gpgsv = require('./Gpgsv.js');

module.exports = {
  Gprmc: Gprmc,
  Gpgsa: Gpgsa,
  GpgsvSatellite: GpgsvSatellite,
  Gpgga: Gpgga,
  Sentence: Sentence,
  Gpgst: Gpgst,
  Gpgsv: Gpgsv,
};
