// Copyright (c) 2012-2016, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2016-2018, The Karbowanec developers
//
// This file is part of Karbo.
//
// Karbo is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Karbo is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Karbo.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {

struct CheckpointData {
  uint32_t height;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = { 
  {  3436,  "fa0348c379f63af68304f9f256ea99cc8560eda5a25740dc7ff94631fc7fcf5d" },
  { 16970,  "456e43e923a02516559d89f567c3fa2068051a9fdac562a937eeaaaf3e9aab46" },
  { 30000,  "4d9762f83ebebb462f1787862aa001e954dadafd203d2fdb973e4b2e52891cf4" },
  { 50000,  "4616b7bad31127ce6fefc9b70f346c61507f8e74d29a8cfe0bdd7d047ba33ca2" },
  { 60001,  "8e39967eb50b8a922cbfe22fe02989218345cbd61ae651ddbecf00834910ff50" },
  { 98466,  "2a4f9183e801849c2b6b4a12324889efe3f22297c2ac8511c0644007eab9c728" },
  { 98842,  "d66758508f0072fdd3c5b754167999b09ee3d0d39488c9cb9d3bb4f9f8f59c54" },
  {103700,  "5663cf2168371c745f163e5b4189ebac71242573cebf7d4c76fd1ac88da8b3bf" },
  {106700,  "678abbf293d1dae9eac831d5fc877a4f53bc98bb86c37e2e5c139af936fb2e1e" },
  {180660,  "6c921a5d3770fa798b038ae26ffd5d9b47ebd733dff4585df7f1632a2101f5a8" },
  {187600,  "f00c6e4b0f9630b52729976f10e532899517333d2ecba22318f820f4512eca69" },
  {200000,  "afdec3ea5af4f22299d4f0889af3cf27f1c9e20bee2d354d6a74400f61b3694d" },
  {213934,  "191f89f771c17ba13b4b6f9950cb013a6608dd8591abfbc67fdbf0197ab7b8da" },
  {214860,  "6084a42b411bcef34a66b48eea9af2f6cdfc12be548a7c423bf2ea927a23b0cf" },
  {216245,  "3af4f447f9f6d9cdf89794f1393708843c8dc14164c809d5233f1546fec3b338" },
  {216341,  "157aeca8472f07207cd0652e7bdfbccf99606d7304ca11dbfcc946f1b2747837" },
  {216394,  "1c42ca7b1cd3763028939b8f2d9e4f2f12d9dc261545fcd6adbe32d11678a823" },
  {216592,  "8061aab9e88e7a3f4181a0579d31a4c0560231d91f2b9e84828ae71208f634c6" },
  {217000,  "1a1b6866c5a725070cd7afb0ad93bd879e1619211248903a990a162ac0c58400" },
  {231000,  "a88c3b29ad95a7a7e06ab71ac668604889fd5710365d9687857b0c7f143543a4" },
  {256700,  "0dd0f2ff1a01ab01d92f9be4732775e8b461fdd037dfe258d53b690f7c10df6f" },
  {262662,  "05a363ef6d0d552ec181ef0b2b0f22878fe629ae492f8f251ca30df1e47e7eb4" },
  {266062,  "316a263ea3d7dc8eac0f0480952db806f798a706d81508819403ccbe20778ae1" },
  {266111,  "8705ab8a54403564375e663dea8310bb2d92eb57a165fa8967c611fa34f98950" },
  {269269,  "81ac921c64b11a8a724e4eb1c9f6e9556844f880e03173825b93ff20f65489d8" },
  {278340,  "efc338ccce81b4d7c0e57ed27ac8a8daa61182eada5802f82de154e341057397" },
  {285642,  "b9944f28c173e4b40b54cc9a74a14dddf4029a4e6be11e22a1833132e2bf3126" },
  {291494,  "a42efe20d0641336c242ba6049d7768baf83f23230da042fb3f980139edb908a" },
  {293740,  "dbe17265f0f27f43297bd52e7388b32e7a2f0d29db0cee7441ebf8b5b35db61e" },
  {297090,  "0eb8b7bea247fcd9da2160855d6779b1e4f378a30a34c898e481923772b6e004" },
  {300891,  "439834db795032e467a2ea6a06e8f7a034fc6d16c6959608673d68916f2e4cfa" },
  {304844,  "0710cd72e6ce7cf20ce4b77473d57bab95a422f545e8d353e6e7ee48ae1f8567" },
  {304924,  "f5531e3c074bc49f11484f276084d2287c2ce3823e9b6000c1a6b5c5fcae1142" },
  {306299,  "772d68beae36c7c72e0173c049eb984d397967b52b859e43038a012aa746477f" },
  {350000,  "96609aba978a3d30e0c31312d9682db2e82fb13501d5407a6a58a4f348924e1f" },
  {364800,  "e286344f2c2b136ac94f59164930a25f1cd5fc210930022f27893685282c0f44" },
  {372700,  "16dcf3c46e2a780092060b67580e5a4055c867a7c60c42fffa7c50a7f2daba72" }
};
  
}
