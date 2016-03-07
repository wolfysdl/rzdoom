// 'None' must always be the first name.
xx(None)
xx(Null)

xx(Super)
xx(Object)
xx(Actor)

xx(Untranslated)

xx(Doom)
xx(Heretic)
xx(Hexen)
xx(Strife)
xx(Raven)

// blood spawning
xx(Blood)
xx(BloodSplatter)
xx(AxeBlood)
xx(Spray)

// Invulnerability types
xx(Ghost)
xx(Reflective)

// Invisibility types
xx(Additive)
xx(Cumulative)
xx(Fuzzy)
xx(Opaque)
xx(Stencil)
xx(AddStencil)

// Render styles
xx(Normal)
xx(SoulTrans)
xx(OptFuzzy)
xx(Add)
xx(Shaded)
xx(AddShaded)
xx(TranslucentStencil)
xx(Shadow)
xx(Subtract)
xx(Subtractive)
xx(FillColor)

// Healingradius types
xx(Mana)
xx(Armor)

// Per-actor sound channels
xx(Auto)
xx(Weapon)
xx(Voice)
xx(Item)
xx(Body)
xx(SoundSlot5)
xx(SoundSlot6)
xx(SoundSlot7)

// Hexen sound sequence names
xx(Platform)
xx(PlatformMetal)
xx(Silence)
xx(Lava)
xx(Water)
xx(Ice)
xx(Earth)
xx(PlatformMetal2)
xx(DoorNormal)
xx(DoorHeavy)
xx(DoorMetal)
xx(DoorCreak)
xx(DoorMetal2)
xx(Wind)

xx(PointPusher)
xx(PointPuller)

xx(UpperStackLookOnly)
xx(LowerStackLookOnly)

xx(BulletPuff)
xx(StrifePuff)
xx(MaulerPuff)

// Special bosses A_BossDeath knows about
xx(Fatso)
xx(Arachnotron)
xx(BaronOfHell)
xx(Cyberdemon)
xx(SpiderMastermind)
xx(Ironlich)
xx(Minotaur)
xx(Sorcerer2)

// P_SpawnMapThing checks for these as health items (I smell a FIXME)
xx(Berserk)
xx(Soulsphere)
xx(Megasphere)		// also counts as armor for P_SpawnMapThing

// Standard player classes
xx(DoomPlayer)
xx(HereticPlayer)
xx(StrifePlayer)
xx(FighterPlayer)
xx(ClericPlayer)
xx(MagePlayer)
xx(ChexPlayer)
xx(ChickenPlayer)
xx(PigPlayer)

// Flechette names for the different Hexen player classes
xx(ArtiPoisonBag1)
xx(ArtiPoisonBag2)
xx(ArtiPoisonBag3)

// Strife quests
xx(QuestItem)

// Armor
xx(BasicArmor)

// The Wings of Wrath
xx(ArtiFly)

// Doom ammo types
xx(Clip)
xx(Shell)
xx(RocketAmmo)
xx(Cell)

// Hexen Mana
xx(Mana1)
xx(Mana2)

// Hexen's fourth weapons
xx(FWeapQuietus)
xx(CWeapWraithverge)
xx(MWeapBloodscourge)

// Misc Hexen classes
xx(LightningZap)

// Ammo and weapon names for the Strife status bar
xx(ClipOfBullets)
xx(PoisonBolts)
xx(ElectricBolts)
xx(HEGrenadeRounds)
xx(PhosphorusGrenadeRounds)
xx(MiniMissiles)
xx(EnergyPod)

xx(StrifeCrossbow)
xx(AssaultGun)
xx(FlameThrower)
xx(MiniMissileLauncher)
xx(StrifeGrenadeLauncher)
xx(Mauler)

xx(AcolyteBlue)
xx(SpectralLightningV1)
xx(SpectralLightningV2)
xx(TeleportDest)
xx(TeleportDest2)

// Strife's spectres
xx(AlienSpectre1)
xx(AlienSpectre2)
xx(AlienSpectre3)
xx(AlienSpectre4)
xx(AlienSpectre5)
xx(Oracle)

xx(Chicken)
xx(Pig)

// Standard animator names.
xx(Spawn)
xx(See)
xx(Pain)
xx(Melee)
xx(Missile)
xx(Crash)
xx(Death)
xx(Raise)
xx(Wound)
xx(Heal)
xx(Crush)
xx(Yes)
xx(No)
xx(Greetings)
xx(Idle)
xx(GenericFreezeDeath)
xx(GenericCrush)

// Bounce state names
xx(Bounce)
xx(Wall)
xx(Floor)
xx(Ceiling)
xx(Creature)

// Compatible death names for the decorate parser.
xx(XDeath)
xx(Burn)
//xx(Ice)			// already defined above
xx(Disintegrate)
xx(Brainexplode)

// Weapon animator names.
xx(Select)
xx(Deselect)
xx(Ready)
xx(Fire)
xx(Hold)
xx(AltFire)
xx(AltHold)
xx(Flash)
xx(AltFlash)
xx(Reload)
xx(Zoom)
xx(User1)
xx(User2)
xx(User3)
xx(User4)

// State names used by ASwitchableDecoration
xx(Active)
xx(Inactive)

// State names used by ACustomInventory
xx(Pickup)
xx(Use)
xx(Drop)

xx(Fist)
//xx(Berserk)
xx(Chainsaw)
xx(Pistol)
xx(Shotgun)
xx(SSG)
xx(Chaingun)
xx(Rocket)
xx(Plasma)
xx(BFG)
//xx(Railgun)
xx(Dagger)

// Damage types
//xx(Fire)		already defined above
//xx(Ice)
//xx(Disintegrate)
xx(Drowning)
xx(Slime)
//xx(Crush)
xx(Telefrag)
xx(Falling)
xx(Suicide)
xx(Exit)
xx(Railgun)
xx(Poison)
xx(Electric)
xx(BFGSplash)
xx(DrainLife)	// A weapon like the Sigil that drains your life away.
xx(Massacre)	// For death by a cheater!
//(Melee)		already defined above, so don't define it again
xx(InstantDeath)	// Strife "instant death"
xx(PoisonCloud)	// makes monsters howl.
xx(Hitscan)		// for normal guns and the like

// Special death name for getting killed excessively. Could be used as
// a damage type if you wanted to force an extreme death.
xx(Extreme)
xx(MDK)
xx(Cast) // 'damage type' for the cast call

// Special names for thingdef_exp.cpp
xx(Random)
xx(Random2)
xx(Cos)
xx(Sin)
xx(Alpha)
xx(Angle)
xx(Args)
xx(CeilingZ)
xx(FloorZ)
xx(Health)
xx(Pitch)
xx(Special)
xx(TID)
xx(TIDtoHate)
xx(WaterLevel)
xx(X)
xx(Y)
xx(Z)
xx(MomX)
xx(MomY)
xx(MomZ)
xx(Abs)
xx(ACS_NamedExecuteWithResult)
xx(CallACS)
xx(Sqrt)
xx(CheckClass)
xx(IsPointerEqual)
xx(Pick)

// Various actor names which are used internally
xx(MapSpot)
xx(PatrolPoint)
xx(PatrolSpecial)
xx(Communicator)

// Textmap properties
//xx(X)
//xx(Y)
xx(ZFloor)
xx(ZCeiling)
xx(Height)
//xx(Tid)
//xx(Angle)
xx(Type)
//xx(Special)
xx(Arg0)
xx(Arg1)
xx(Arg2)
xx(Arg3)
xx(Arg4)
xx(Arg0Str)
xx(Arg1Str)
xx(Id)
xx(MoreIds)
xx(V1)
xx(V2)

xx(Sidefront)
xx(Sideback)
xx(Offsetx)
xx(Offsety)
xx(Texturetop)
xx(Texturebottom)
xx(Texturemiddle)
xx(Sector)
xx(Heightfloor)
xx(Heightceiling)
xx(Lightlevel)
xx(Texturefloor)
xx(Textureceiling)
xx(Nodecals)

xx(Skill1)
xx(Skill2)
xx(Skill3)
xx(Skill4)
xx(Skill5)
xx(Skill6)
xx(Skill7)
xx(Skill8)
xx(Skill9)
xx(Skill10)
xx(Skill11)
xx(Skill12)
xx(Skill13)
xx(Skill14)
xx(Skill15)
xx(Skill16)
xx(Medium)
xx(Hard)
xx(Ambush)
xx(Dormant)
xx(Class0)
xx(Class1)
xx(Class2)
xx(Class3)
xx(Class4)
xx(Class5)
xx(Class6)
xx(Class7)
xx(Class8)
xx(Class9)
xx(Class10)
xx(Class11)
xx(Class12)
xx(Class13)
xx(Class14)
xx(Class15)
xx(Class16)
xx(Single)
xx(Coop)
xx(Dm)
xx(Translucent)
xx(Invisible)
xx(Friend)
xx(Strifeally)
xx(Standing)
xx(Countsecret)
xx(Score)
xx(Roll)
xx(Scale)
xx(ScaleX)
xx(ScaleY)
xx(Floatbobphase)

xx(Blocking)
xx(Blockmonsters)
xx(Twosided)
xx(Dontpegtop)
xx(Dontpegbottom)
xx(Secret)
xx(Blocksound)
xx(Dontdraw)
xx(Mapped)
xx(Monsteractivate)
xx(Blockplayers)
xx(Blockeverything)
xx(Zoneboundary)
xx(Jumpover)
xx(Blockfloaters)
xx(Clipmidtex)
xx(Wrapmidtex)
xx(Midtex3d)
xx(Checkswitchrange)
xx(Firstsideonly)
xx(Transparent)	
xx(Passuse)
xx(Repeatspecial)
xx(Conversation)
xx(Locknumber)
xx(Midtex3dimpassible)

xx(Playercross)
xx(Playeruse)
xx(Playeruseback)
xx(Monstercross)
xx(Impact)
xx(Playerpush)
xx(Missilecross)
xx(Anycross)
xx(Monsteruse)
xx(Monsterpush)

xx(ZDoom)
xx(ZDoomTranslated)
xx(Vavoom)

xx(Xpanningfloor)
xx(Ypanningfloor)
xx(Xpanningceiling)
xx(Ypanningceiling)
xx(Xscalefloor)
xx(Yscalefloor)
xx(Xscaleceiling)
xx(Yscaleceiling)
xx(Rotationfloor)
xx(Rotationceiling)
xx(Lightfloor)
xx(Lightceiling)
xx(Lightfloorabsolute)
xx(Lightceilingabsolute)
xx(Gravity)
xx(Lightcolor)
xx(Fadecolor)
xx(Desaturation)
xx(SoundSequence)
xx(Silent)
xx(Nofallingdamage)
xx(Dropactors)
xx(NoRespawn)
xx(Alphafloor)
xx(Alphaceiling)
xx(Renderstylefloor)
xx(Renderstyleceiling)
xx(Waterzone)

xx(offsetx_top)
xx(offsety_top)
xx(offsetx_mid)
xx(offsety_mid)
xx(offsetx_bottom)
xx(offsety_bottom)
xx(scalex_top)
xx(scaley_top)
xx(scalex_mid)
xx(scaley_mid)
xx(scalex_bottom)
xx(scaley_bottom)
xx(light)
xx(lightabsolute)
xx(lightfog)
xx(nofakecontrast)
xx(smoothlighting)
xx(blockprojectiles)
xx(blockuse)
xx(hidden)
xx(blocksight)
xx(blockhitscan)

xx(Renderstyle)

xx(ceilingplane_a)
xx(ceilingplane_b)
xx(ceilingplane_c)
xx(ceilingplane_d)
xx(floorplane_a)
xx(floorplane_b)
xx(floorplane_c)
xx(floorplane_d)
xx(damageamount)
xx(damagetype)
xx(damageinterval)
xx(leakiness)
xx(damageterraineffect)
xx(damagehazard)
xx(floorterrain)
xx(ceilingterrain)

// USDF keywords
xx(Amount)
xx(Text)
xx(Displaycost)
xx(Yesmessage)
xx(Nomessage)
xx(Log)
xx(Giveitem)
xx(Nextpage)
xx(Closedialog)
xx(Cost)
xx(Page)
xx(Count)
xx(Name)
xx(Panel)
xx(Dialog)
xx(Ifitem)
xx(Choice)
xx(Link)

// Special menus
xx(Mainmenu)
xx(Episodemenu)
xx(Playerclassmenu)
xx(HexenDefaultPlayerclassmenu)
xx(Skillmenu)
xx(Startgame)
xx(StartgameConfirm)
xx(StartgameConfirmed)
xx(Loadgamemenu)
xx(Savegamemenu)
xx(Readthismenu)
xx(Optionsmenu)
xx(Quitmenu)
xx(Savemenu)
xx(Playermenu)

xx(Playerbox)
xx(Team)
xx(Color)
xx(Red)
xx(Green)
xx(Blue)
xx(Class)
xx(Skin)
xx(Gender)
xx(Autoaim)
xx(Switch)
xx(Playerdisplay)
xx(Controlmessage)
xx(Crosshairs)
xx(Colorpickermenu)
xx(Mididevices)
xx(Aldevices)
xx(CustomizeControls)
xx(MessageOptions)
xx(AutomapOptions)
xx(ScoreboardOptions)
xx(MapColorMenu)
xx(GameplayOptions)
xx(CompatibilityOptions)
xx(MouseOptions)
xx(JoystickOptions)
xx(SoundOptions)
xx(AdvSoundOptions)
xx(ModReplayerOptions)
xx(VideoOptions)
xx(JoystickConfigMenu)
xx(VMEnterText)
xx(VMTestText)
xx(VideoModeMenu)
xx(res_0)
xx(res_1)
xx(res_2)
xx(res_3)
xx(res_4)
xx(res_5)
xx(res_6)
xx(res_7)
xx(res_8)
xx(res_9)
xx(AlwaysRun)

// end sequences
xx(Inter_Chess)
xx(Inter_Strife)
xx(Inter_Strife_Good)
xx(Inter_Strife_Sad)
xx(Inter_Strife_Bad)
xx(Inter_Strife_Lose)
xx(Inter_Strife_MAP03)
xx(Inter_Strife_MAP10)
xx(Multiplayer)

// more stuff
xx(ColorSet)
xx(NeverSwitchOnPickup)
xx(MoveBob)
xx(StillBob)
xx(PlayerClass)
xx(Wi_NoAutostartMap)
