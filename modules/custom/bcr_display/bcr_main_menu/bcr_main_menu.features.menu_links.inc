<?php
/**
 * @file
 * bcr_main_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function bcr_main_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about:node/61
  $menu_links['main-menu_about:node/61'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/61',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'identifier' => 'main-menu_about:node/61',
      'attributes' => array(
        'id' => 'about-link',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_add-banner:node/add/banner
  $menu_links['main-menu_add-banner:node/add/banner'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/banner',
    'router_path' => 'node/add/banner',
    'link_title' => 'Add Banner',
    'options' => array(
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'attributes' => array(),
      'identifier' => 'main-menu_add-banner:node/add/banner',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -37,
    'customized' => 1,
  );
  // Exported menu link: main-menu_add-blog:node/add/blog
  $menu_links['main-menu_add-blog:node/add/blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/blog',
    'router_path' => 'node/add/blog',
    'link_title' => 'Add Blog',
    'options' => array(
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'attributes' => array(),
      'identifier' => 'main-menu_add-blog:node/add/blog',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
  );
  // Exported menu link: main-menu_add-channel-ad:node/add/channel-ads
  $menu_links['main-menu_add-channel-ad:node/add/channel-ads'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/channel-ads',
    'router_path' => 'node/add/channel-ads',
    'link_title' => 'Add Channel Ad',
    'options' => array(
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'attributes' => array(),
      'identifier' => 'main-menu_add-channel-ad:node/add/channel-ads',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -36,
    'customized' => 1,
  );
  // Exported menu link: main-menu_add-channel:node/add/channel
  $menu_links['main-menu_add-channel:node/add/channel'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/channel',
    'router_path' => 'node/add/channel',
    'link_title' => 'Add Channel',
    'options' => array(
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'attributes' => array(),
      'identifier' => 'main-menu_add-channel:node/add/channel',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -38,
    'customized' => 1,
  );
  // Exported menu link: main-menu_add-content:node/add
  $menu_links['main-menu_add-content:node/add'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add content',
    'options' => array(
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'attributes' => array(),
      'identifier' => 'main-menu_add-content:node/add',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -35,
    'customized' => 1,
  );
  // Exported menu link: main-menu_bcr-zine:bcr-zine
  $menu_links['main-menu_bcr-zine:bcr-zine'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'bcr-zine',
    'router_path' => 'bcr-zine',
    'link_title' => 'BCR Zine',
    'options' => array(
      'identifier' => 'main-menu_bcr-zine:bcr-zine',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
  );
  // Exported menu link: main-menu_community:node/63
  $menu_links['main-menu_community:node/63'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/63',
    'router_path' => 'node/%',
    'link_title' => 'Community',
    'options' => array(
      'identifier' => 'main-menu_community:node/63',
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'attributes' => array(
        'id' => 'community-link',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_contact:node/62
  $menu_links['main-menu_contact:node/62'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/62',
    'router_path' => 'node/%',
    'link_title' => 'Contact',
    'options' => array(
      'identifier' => 'main-menu_contact:node/62',
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'attributes' => array(
        'id' => 'contact-link',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_e-mail:mailto:info@berlincommunityradio.com
  $menu_links['main-menu_e-mail:mailto:info@berlincommunityradio.com'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'mailto:info@berlincommunityradio.com',
    'router_path' => '',
    'link_title' => 'E-Mail',
    'options' => array(
      'menu_icon' => array(
        'enable' => 1,
        'path' => 'public://menu_icons/menu_icon_1940.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'main-menu_e-mail:mailto:info@berlincommunityradio.com',
      'attributes' => array(
        'title' => 'E-Mail link',
        'id' => 'mail-link',
        'class' => array(
          0 => 'menu_icon',
          1 => 'menu-1940',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -28,
    'customized' => 1,
  );
  // Exported menu link: main-menu_facebook:https://www.facebook.com/berlincommunityradio
  $menu_links['main-menu_facebook:https://www.facebook.com/berlincommunityradio'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.facebook.com/berlincommunityradio',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'menu_icon' => array(
        'enable' => 1,
        'path' => 'public://menu_icons/menu_icon_1433.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'main-menu_facebook:https://www.facebook.com/berlincommunityradio',
      'attributes' => array(
        'id' => 'facebook-link',
        'class' => array(
          0 => 'menu_icon',
          1 => 'menu-1433',
        ),
        'target' => '_blank',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -31,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: main-menu_impressum:node/101
  $menu_links['main-menu_impressum:node/101'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/101',
    'router_path' => 'node/%',
    'link_title' => 'Impressum',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_impressum:node/101',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
  );
  // Exported menu link: main-menu_instagram:http://instagram.com/bcr_radio
  $menu_links['main-menu_instagram:http://instagram.com/bcr_radio'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://instagram.com/bcr_radio',
    'router_path' => '',
    'link_title' => 'Instagram',
    'options' => array(
      'menu_icon' => array(
        'enable' => 1,
        'path' => 'public://menu_icons/menu_icon_1939.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'main-menu_instagram:http://instagram.com/bcr_radio',
      'attributes' => array(
        'title' => 'Instagram',
        'id' => 'instagram-link',
        'class' => array(
          0 => 'menu_icon',
          1 => 'menu-1939',
        ),
        'target' => '_blank',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -29,
    'customized' => 1,
  );
  // Exported menu link: main-menu_live:node/65
  $menu_links['main-menu_live:node/65'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/65',
    'router_path' => 'node/%',
    'link_title' => 'Live',
    'options' => array(
      'attributes' => array(
        'id' => 'live-link',
      ),
      'identifier' => 'main-menu_live:node/65',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_mixcloud:https://www.mixcloud.com/BCR_Radio
  $menu_links['main-menu_mixcloud:https://www.mixcloud.com/BCR_Radio'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.mixcloud.com/BCR_Radio',
    'router_path' => '',
    'link_title' => 'mixcloud',
    'options' => array(
      'menu_icon' => array(
        'enable' => 1,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'attributes' => array(
        'id' => 'mixcloud-link',
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_mixcloud:https://www.mixcloud.com/BCR_Radio',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -34,
    'customized' => 1,
  );
  // Exported menu link: main-menu_schedule:node/64
  $menu_links['main-menu_schedule:node/64'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/64',
    'router_path' => 'node/%',
    'link_title' => 'Schedule',
    'options' => array(
      'attributes' => array(
        'id' => 'schedule-link',
      ),
      'identifier' => 'main-menu_schedule:node/64',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_shop:http://berlincommunityradio.tictail.com
  $menu_links['main-menu_shop:http://berlincommunityradio.tictail.com'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://berlincommunityradio.tictail.com',
    'router_path' => '',
    'link_title' => 'Shop',
    'options' => array(
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'main-menu_shop:http://berlincommunityradio.tictail.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: main-menu_soundcloud:https://soundcloud.com/berlincommunityradio
  $menu_links['main-menu_soundcloud:https://soundcloud.com/berlincommunityradio'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://soundcloud.com/berlincommunityradio',
    'router_path' => '',
    'link_title' => 'Soundcloud',
    'options' => array(
      'menu_icon' => array(
        'enable' => 1,
        'path' => 'public://menu_icons/menu_icon_1431.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'main-menu_soundcloud:https://soundcloud.com/berlincommunityradio',
      'attributes' => array(
        'id' => 'soundcloud-link',
        'class' => array(
          0 => 'menu_icon',
          1 => 'menu-1431',
        ),
        'target' => '_blank',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -33,
    'customized' => 1,
  );
  // Exported menu link: main-menu_twitter:https://twitter.com/BCR_Radio
  $menu_links['main-menu_twitter:https://twitter.com/BCR_Radio'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://twitter.com/BCR_Radio',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'menu_icon' => array(
        'enable' => 1,
        'path' => 'public://menu_icons/menu_icon_1432.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'main-menu_twitter:https://twitter.com/BCR_Radio',
      'attributes' => array(
        'id' => 'twitter-link',
        'class' => array(
          0 => 'menu_icon',
          1 => 'menu-1432',
        ),
        'target' => '_blank',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -32,
    'customized' => 1,
  );
  // Exported menu link: main-menu_youtube:https://www.youtube.com/channel/UCumMTmOu_9khmcAN64uA-2w
  $menu_links['main-menu_youtube:https://www.youtube.com/channel/UCumMTmOu_9khmcAN64uA-2w'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.youtube.com/channel/UCumMTmOu_9khmcAN64uA-2w',
    'router_path' => '',
    'link_title' => 'Youtube',
    'options' => array(
      'menu_icon' => array(
        'enable' => 1,
        'path' => 'public://menu_icons/menu_icon_1938.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'main-menu_youtube:https://www.youtube.com/channel/UCumMTmOu_9khmcAN64uA-2w',
      'attributes' => array(
        'id' => 'youtube-link',
        'class' => array(
          0 => 'menu_icon',
          1 => 'menu-1938',
        ),
        'target' => '_blank',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -30,
    'customized' => 1,
  );
  // Exported menu link: menu-streams_stream-live-in-m3u:http://google.com
  $menu_links['menu-streams_stream-live-in-m3u:http://google.com'] = array(
    'menu_name' => 'menu-streams',
    'link_path' => 'http://google.com',
    'router_path' => '',
    'link_title' => 'Stream live in M3U',
    'options' => array(
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'identifier' => 'menu-streams_stream-live-in-m3u:http://google.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Add Banner');
  t('Add Blog');
  t('Add Channel');
  t('Add Channel Ad');
  t('Add content');
  t('BCR Zine');
  t('Community');
  t('Contact');
  t('E-Mail');
  t('Facebook');
  t('Home');
  t('Impressum');
  t('Instagram');
  t('Live');
  t('Schedule');
  t('Shop');
  t('Soundcloud');
  t('Stream live in M3U');
  t('Twitter');
  t('Youtube');
  t('mixcloud');


  return $menu_links;
}
