// Item.cpp: implementation of the CItem class.
//
//////////////////////////////////////////////////////////////////////

#include "Item.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CItem::CItem()
{
	ZeroMemory(m_cName, sizeof(m_cName));
	m_sSprite = 0;
	m_sSpriteFrame = 0;
	m_dwAttribute = NULL;
}

CItem::~CItem()
{
	
}
