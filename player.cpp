bool Player::canSeeCreature(const Creature* creature) const
{
if(creature == this)
return true;
if(const Player* player = creature->getPlayer())
return !player->isGhost() || (getAccess() > 2 && getGhostAccess() >= player->getGhostAccess());
return !creature->isInvisible() || canSeeInvisibility();
	if(party)
		party->isPlayerMember(player)) {return !creature->isInvisible() || canSeeInvisibility();
}
