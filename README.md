





<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="utf-8">



  <link crossorigin="anonymous" href="https://assets-cdn.github.com/assets/frameworks-612da304eac9a72f5d085232387f7f5cd82df6c73120fd97fcf0bdefacbd9b16.css" integrity="sha256-YS2jBOrJpy9dCFIyOH9/XNgt9scxIP2X/PC976y9mxY=" media="all" rel="stylesheet" />
  <link crossorigin="anonymous" href="https://assets-cdn.github.com/assets/github-684b801f2095929d7ee8e30bd4494996b6577bb040978534085f68bf4114d4b8.css" integrity="sha256-aEuAHyCVkp1+6OML1ElJlrZXe7BAl4U0CF9ov0EU1Lg=" media="all" rel="stylesheet" />
  

  <meta name="viewport" content="width=device-width">
  
  <title>miss-interpret/README.md at master · miss-interpret/cheshire</title>
  <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub">
  <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub">
  <meta property="fb:app_id" content="1401488693436528">

    
    <meta content="https://avatars1.githubusercontent.com/u/19060?v=3&amp;s=400" property="og:image" /><meta content="GitHub" property="og:site_name" /><meta content="object" property="og:type" /><meta content="miss-interpret/onyx-native" property="og:title" /><meta content="https://github.com/miss-interpret/onyx-native" property="og:url" /><meta content="onyx-native - Affordances for adding native support via stateful instances to an Onyx workflow" property="og:description" />

  <link rel="assets" href="https://assets-cdn.github.com/">
  <link rel="web-socket" href="wss://live.github.com/_sockets/VjI6MTYxMjkzMDc5OmU2MTE3MjNlOGJhNTZhMTRjMzc2NWQzNzY1NzA3OWQ5ODIyZWVhNzdiZWEzNDRiNTVkOTQzZDNjNGRlYTZlZGY=--ea11adef0d3e9f21dc2ca4aed39fb1ee404990ee">
  <meta name="pjax-timeout" content="1000">
  <link rel="sudo-modal" href="/sessions/sudo_modal">
  <meta name="request-id" content="C8FA:15604:8FCA06:EABC34:58ECD87A" data-pjax-transient>
  

  <meta name="selected-link" value="repo_source" data-pjax-transient>

  <meta name="google-site-verification" content="KT5gs8h0wvaagLKAVWq8bbeNwnZZK1r1XQysX3xurLU">
<meta name="google-site-verification" content="ZzhVyEFwb7w3e0-uOTltm8Jsck2F5StVihD0exw2fsA">
    <meta name="google-analytics" content="UA-3769691-2">

<meta content="collector.githubapp.com" name="octolytics-host" /><meta content="github" name="octolytics-app-id" /><meta content="https://collector.githubapp.com/github-external/browser_event" name="octolytics-event-url" /><meta content="C8FA:15604:8FCA06:EABC34:58ECD87A" name="octolytics-dimension-request_id" /><meta content="4212902" name="octolytics-actor-id" /><meta content="MissInterpret" name="octolytics-actor-login" /><meta content="6c63b5d0090656d3d6f922a078998e990aa6ae22ec3e394a3a7a5f5d512e6bce" name="octolytics-actor-hash" />
<meta content="/&lt;user-name&gt;/&lt;repo-name&gt;/blob/show" data-pjax-transient="true" name="analytics-location" />




  <meta class="js-ga-set" name="dimension1" content="Logged In">


  

      <meta name="hostname" content="github.com">
  <meta name="user-login" content="MissInterpret">

      <meta name="expected-hostname" content="github.com">
    <meta name="js-proxy-site-detection-payload" content="YzQxMzUyMzZkY2JiMDc0Y2M2M2RjMmZjMTFiNGUzOGU3ZmRmMWE2MDZlM2Q1NWI5Mzk3ZWM4ZjkxNzNlMzFmYXx7InJlbW90ZV9hZGRyZXNzIjoiNjguMTE1LjEzNC4zNSIsInJlcXVlc3RfaWQiOiJDOEZBOjE1NjA0OjhGQ0EwNjpFQUJDMzQ6NThFQ0Q4N0EiLCJ0aW1lc3RhbXAiOjE0OTE5MTY5MzEsImhvc3QiOiJnaXRodWIuY29tIn0=">


  <meta name="html-safe-nonce" content="1482a40ff1528d961bce0daf43e415a5f7949c80">

  <meta http-equiv="x-pjax-version" content="a978608986d41a14e86305ff40a08942">
  

    
  <meta name="description" content="cheshire - Clojure JSON and JSON SMILE (binary json format) encoding/decoding">
  <meta name="go-import" content="github.com/dakrone/cheshire git https://github.com/dakrone/cheshire.git">

  <meta content="19060" name="octolytics-dimension-user_id" /><meta content="dakrone" name="octolytics-dimension-user_login" /><meta content="1516467" name="octolytics-dimension-repository_id" /><meta content="dakrone/cheshire" name="octolytics-dimension-repository_nwo" /><meta content="true" name="octolytics-dimension-repository_public" /><meta content="false" name="octolytics-dimension-repository_is_fork" /><meta content="1516467" name="octolytics-dimension-repository_network_root_id" /><meta content="dakrone/cheshire" name="octolytics-dimension-repository_network_root_nwo" />
        <link href="https://github.com/dakrone/cheshire/commits/master.atom" rel="alternate" title="Recent Commits to cheshire:master" type="application/atom+xml">


    <link rel="canonical" href="https://github.com/dakrone/cheshire/blob/master/README.md" data-pjax-transient>


  <meta name="browser-stats-url" content="https://api.github.com/_private/browser/stats">

  <meta name="browser-errors-url" content="https://api.github.com/_private/browser/errors">

  <link rel="mask-icon" href="https://assets-cdn.github.com/pinned-octocat.svg" color="#000000">
  <link rel="icon" type="image/x-icon" href="https://assets-cdn.github.com/favicon.ico">

<meta name="theme-color" content="#1e2327">


  <meta name="u2f-support" content="true">

  </head>

  <body class="logged-in env-production emoji-size-boost page-blob">
    


  <div class="position-relative js-header-wrapper ">
    <a href="#start-of-content" tabindex="1" class="accessibility-aid js-skip-to-content">Skip to content</a>
    <div id="js-pjax-loader-bar" class="pjax-loader-bar"><div class="progress"></div></div>

    
    
    



        
<div class="header" role="banner">
  <div class="container clearfix">
    <a class="header-logo-invertocat" href="https://github.com/" data-hotkey="g d" aria-label="Homepage" data-ga-click="Header, go to dashboard, icon:logo">
  <svg aria-hidden="true" class="octicon octicon-mark-github" height="32" version="1.1" viewBox="0 0 16 16" width="32"><path fill-rule="evenodd" d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0 0 16 8c0-4.42-3.58-8-8-8z"/></svg>
</a>


        <div class="header-search scoped-search site-scoped-search js-site-search" role="search">
  <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/dakrone/cheshire/search" class="js-site-search-form" data-scoped-search-url="/dakrone/cheshire/search" data-unscoped-search-url="/search" method="get"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /></div>
    <label class="form-control header-search-wrapper js-chromeless-input-container">
        <a href="/dakrone/cheshire/blob/master/README.md" class="header-search-scope no-underline">This repository</a>
      <input type="text"
        class="form-control header-search-input js-site-search-focus js-site-search-field is-clearable"
        data-hotkey="s"
        name="q"
        value=""
        placeholder="Search"
        aria-label="Search this repository"
        data-unscoped-placeholder="Search GitHub"
        data-scoped-placeholder="Search"
        autocapitalize="off">
        <input type="hidden" class="js-site-search-type-field" name="type" >
    </label>
</form></div>


      <ul class="header-nav float-left" role="navigation">
        <li class="header-nav-item">
          <a href="/pulls" aria-label="Pull requests you created" class="js-selected-navigation-item header-nav-link" data-ga-click="Header, click, Nav menu - item:pulls context:user" data-hotkey="g p" data-selected-links="/pulls /pulls/assigned /pulls/mentioned /pulls">
            Pull requests
</a>        </li>
        <li class="header-nav-item">
          <a href="/issues" aria-label="Issues you created" class="js-selected-navigation-item header-nav-link" data-ga-click="Header, click, Nav menu - item:issues context:user" data-hotkey="g i" data-selected-links="/issues /issues/assigned /issues/mentioned /issues">
            Issues
</a>        </li>
          <li class="header-nav-item">
            <a class="header-nav-link" href="https://gist.github.com/" data-ga-click="Header, go to gist, text:gist">Gist</a>
          </li>
      </ul>

    
<ul class="header-nav user-nav float-right" id="user-links">
  <li class="header-nav-item">
    
    <a href="/notifications" aria-label="You have no unread notifications" class="header-nav-link notification-indicator tooltipped tooltipped-s js-socket-channel js-notification-indicator " data-channel="notification-changed:4212902" data-ga-click="Header, go to notifications, icon:read" data-hotkey="g n">
        <span class="mail-status "></span>
        <svg aria-hidden="true" class="octicon octicon-bell float-left" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M14 12v1H0v-1l.73-.58c.77-.77.81-2.55 1.19-4.42C2.69 3.23 6 2 6 2c0-.55.45-1 1-1s1 .45 1 1c0 0 3.39 1.23 4.16 5 .38 1.88.42 3.66 1.19 4.42l.66.58H14zm-7 4c1.11 0 2-.89 2-2H5c0 1.11.89 2 2 2z"/></svg>
</a>
  </li>

  <li class="header-nav-item dropdown js-menu-container">
    <a class="header-nav-link tooltipped tooltipped-s js-menu-target" href="/new"
       aria-label="Create new…"
       data-ga-click="Header, create new, icon:add">
      <svg aria-hidden="true" class="octicon octicon-plus float-left" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 9H7v5H5V9H0V7h5V2h2v5h5z"/></svg>
      <span class="dropdown-caret"></span>
    </a>

    <div class="dropdown-menu-content js-menu-content">
      <ul class="dropdown-menu dropdown-menu-sw">
        
<a class="dropdown-item" href="/new" data-ga-click="Header, create new repository">
  New repository
</a>

  <a class="dropdown-item" href="/new/import" data-ga-click="Header, import a repository">
    Import repository
  </a>

<a class="dropdown-item" href="https://gist.github.com/" data-ga-click="Header, create new gist">
  New gist
</a>

  <a class="dropdown-item" href="/organizations/new" data-ga-click="Header, create new organization">
    New organization
  </a>



  <div class="dropdown-divider"></div>
  <div class="dropdown-header">
    <span title="dakrone/cheshire">This repository</span>
  </div>
    <a class="dropdown-item" href="/dakrone/cheshire/issues/new" data-ga-click="Header, create new issue">
      New issue
    </a>

      </ul>
    </div>
  </li>

  <li class="header-nav-item dropdown js-menu-container">
    <a class="header-nav-link name tooltipped tooltipped-sw js-menu-target" href="/MissInterpret"
       aria-label="View profile and more"
       data-ga-click="Header, show menu, icon:avatar">
      <img alt="@MissInterpret" class="avatar" src="https://avatars0.githubusercontent.com/u/4212902?v=3&amp;s=40" height="20" width="20">
      <span class="dropdown-caret"></span>
    </a>

    <div class="dropdown-menu-content js-menu-content">
      <div class="dropdown-menu dropdown-menu-sw">
        <div class="dropdown-header header-nav-current-user css-truncate">
          Signed in as <strong class="css-truncate-target">MissInterpret</strong>
        </div>

        <div class="dropdown-divider"></div>

        <a class="dropdown-item" href="/MissInterpret" data-ga-click="Header, go to profile, text:your profile">
          Your profile
        </a>
        <a class="dropdown-item" href="/MissInterpret?tab=stars" data-ga-click="Header, go to starred repos, text:your stars">
          Your stars
        </a>
        <a class="dropdown-item" href="/explore" data-ga-click="Header, go to explore, text:explore">
          Explore
        </a>
          <a class="dropdown-item" href="/integrations" data-ga-click="Header, go to integrations, text:integrations">
            Integrations
          </a>
        <a class="dropdown-item" href="https://help.github.com" data-ga-click="Header, go to help, text:help">
          Help
        </a>

        <div class="dropdown-divider"></div>

        <a class="dropdown-item" href="/settings/profile" data-ga-click="Header, go to settings, icon:settings">
          Settings
        </a>

        <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/logout" class="logout-form" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="9AKeZ0An6RR3MehJR2/NglAXvMzpkbDX4RysSZAD/0gfAIKuJU/ajLdUc47tjcdn4kvV9i5f3CZUvsFKXUSPEg==" /></div>
          <button type="submit" class="dropdown-item dropdown-signout" data-ga-click="Header, sign out, icon:logout">
            Sign out
          </button>
</form>      </div>
    </div>
  </li>
</ul>


    <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/logout" class="sr-only right-0" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="gLbmoXUYVWDiMSvop3/G3ReFGEjJnU7lmS7lAmRaRmtrtPpoEHBm+CJUsC8Nncw4pdlxcg5TIhQsjIgBqR02MQ==" /></div>
      <button type="submit" class="dropdown-item dropdown-signout" data-ga-click="Header, sign out, icon:logout">
        Sign out
      </button>
</form>  </div>
</div>


      

  </div>

  <div id="start-of-content" class="accessibility-aid"></div>

    <div id="js-flash-container">
</div>



  <div role="main">
        <div itemscope itemtype="http://schema.org/SoftwareSourceCode">
    <div id="js-repo-pjax-container" data-pjax-container>
        


  <div class="pagehead repohead instapaper_ignore readability-menu experiment-repo-nav">
    <div class="container repohead-details-container">


      <ul class="pagehead-actions">
  <li>
        <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/notifications/subscribe" class="js-social-container" data-autosubmit="true" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="HaV5OIH796uP/TJ116dXvMcnIfC1mRkEuP806a39o08QtNiB9DNb6/v41SroKM5Zj5PQ/vyep56zMCMUkCskWA==" /></div>      <input class="form-control" id="repository_id" name="repository_id" type="hidden" value="1516467" />

        <div class="select-menu js-menu-container js-select-menu">
          <a href="/dakrone/cheshire/subscription"
            class="btn btn-sm btn-with-count select-menu-button js-menu-target" role="button" tabindex="0" aria-haspopup="true"
            data-ga-click="Repository, click Watch settings, action:blob#show">
            <span class="js-select-button">
              <svg aria-hidden="true" class="octicon octicon-eye" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M8.06 2C3 2 0 8 0 8s3 6 8.06 6C13 14 16 8 16 8s-3-6-7.94-6zM8 12c-2.2 0-4-1.78-4-4 0-2.2 1.8-4 4-4 2.22 0 4 1.8 4 4 0 2.22-1.78 4-4 4zm2-4c0 1.11-.89 2-2 2-1.11 0-2-.89-2-2 0-1.11.89-2 2-2 1.11 0 2 .89 2 2z"/></svg>
              Watch
            </span>
          </a>
          <a class="social-count js-social-count"
            href="/dakrone/cheshire/watchers"
            aria-label="29 users are watching this repository">
            29
          </a>

        <div class="select-menu-modal-holder">
          <div class="select-menu-modal subscription-menu-modal js-menu-content">
            <div class="select-menu-header js-navigation-enable" tabindex="-1">
              <svg aria-label="Close" class="octicon octicon-x js-menu-close" height="16" role="img" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48z"/></svg>
              <span class="select-menu-title">Notifications</span>
            </div>

              <div class="select-menu-list js-navigation-container" role="menu">

                <div class="select-menu-item js-navigation-item selected" role="menuitem" tabindex="0">
                  <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
                  <div class="select-menu-item-text">
                    <input checked="checked" id="do_included" name="do" type="radio" value="included" />
                    <span class="select-menu-item-heading">Not watching</span>
                    <span class="description">Be notified when participating or @mentioned.</span>
                    <span class="js-select-button-text hidden-select-button-text">
                      <svg aria-hidden="true" class="octicon octicon-eye" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M8.06 2C3 2 0 8 0 8s3 6 8.06 6C13 14 16 8 16 8s-3-6-7.94-6zM8 12c-2.2 0-4-1.78-4-4 0-2.2 1.8-4 4-4 2.22 0 4 1.8 4 4 0 2.22-1.78 4-4 4zm2-4c0 1.11-.89 2-2 2-1.11 0-2-.89-2-2 0-1.11.89-2 2-2 1.11 0 2 .89 2 2z"/></svg>
                      Watch
                    </span>
                  </div>
                </div>

                <div class="select-menu-item js-navigation-item " role="menuitem" tabindex="0">
                  <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
                  <div class="select-menu-item-text">
                    <input id="do_subscribed" name="do" type="radio" value="subscribed" />
                    <span class="select-menu-item-heading">Watching</span>
                    <span class="description">Be notified of all conversations.</span>
                    <span class="js-select-button-text hidden-select-button-text">
                      <svg aria-hidden="true" class="octicon octicon-eye" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M8.06 2C3 2 0 8 0 8s3 6 8.06 6C13 14 16 8 16 8s-3-6-7.94-6zM8 12c-2.2 0-4-1.78-4-4 0-2.2 1.8-4 4-4 2.22 0 4 1.8 4 4 0 2.22-1.78 4-4 4zm2-4c0 1.11-.89 2-2 2-1.11 0-2-.89-2-2 0-1.11.89-2 2-2 1.11 0 2 .89 2 2z"/></svg>
                      Unwatch
                    </span>
                  </div>
                </div>

                <div class="select-menu-item js-navigation-item " role="menuitem" tabindex="0">
                  <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
                  <div class="select-menu-item-text">
                    <input id="do_ignore" name="do" type="radio" value="ignore" />
                    <span class="select-menu-item-heading">Ignoring</span>
                    <span class="description">Never be notified.</span>
                    <span class="js-select-button-text hidden-select-button-text">
                      <svg aria-hidden="true" class="octicon octicon-mute" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M8 2.81v10.38c0 .67-.81 1-1.28.53L3 10H1c-.55 0-1-.45-1-1V7c0-.55.45-1 1-1h2l3.72-3.72C7.19 1.81 8 2.14 8 2.81zm7.53 3.22l-1.06-1.06-1.97 1.97-1.97-1.97-1.06 1.06L11.44 8 9.47 9.97l1.06 1.06 1.97-1.97 1.97 1.97 1.06-1.06L13.56 8l1.97-1.97z"/></svg>
                      Stop ignoring
                    </span>
                  </div>
                </div>

              </div>

            </div>
          </div>
        </div>
</form>
  </li>

  <li>
      <div class="js-toggler-container js-social-container starring-container ">
    <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/dakrone/cheshire/unstar" class="starred" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="Xqt4ylKU3AkOdAbQN8EhaNYD1WxoRDGHzyi4qwtWaNo0ZNBf3L7Mg7uIaMPMHEwYtnPYnYm0hVz3PugtXQuFKg==" /></div>
      <button
        type="submit"
        class="btn btn-sm btn-with-count js-toggler-target"
        aria-label="Unstar this repository" title="Unstar dakrone/cheshire"
        data-ga-click="Repository, click unstar button, action:blob#show; text:Unstar">
        <svg aria-hidden="true" class="octicon octicon-star" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M14 6l-4.9-.64L7 1 4.9 5.36 0 6l3.6 3.26L2.67 14 7 11.67 11.33 14l-.93-4.74z"/></svg>
        Unstar
      </button>
        <a class="social-count js-social-count" href="/dakrone/cheshire/stargazers"
           aria-label="907 users starred this repository">
          907
        </a>
</form>
    <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/dakrone/cheshire/star" class="unstarred" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="AaYaitvTGt0hhaq/QiEomuNBdYmtYLTTSgeyEmhhdenbTBtF12FIBUJd6Ub708X68lFIkaqZ/Y4nxGYhxtJMAw==" /></div>
      <button
        type="submit"
        class="btn btn-sm btn-with-count js-toggler-target"
        aria-label="Star this repository" title="Star dakrone/cheshire"
        data-ga-click="Repository, click star button, action:blob#show; text:Star">
        <svg aria-hidden="true" class="octicon octicon-star" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M14 6l-4.9-.64L7 1 4.9 5.36 0 6l3.6 3.26L2.67 14 7 11.67 11.33 14l-.93-4.74z"/></svg>
        Star
      </button>
        <a class="social-count js-social-count" href="/dakrone/cheshire/stargazers"
           aria-label="907 users starred this repository">
          907
        </a>
</form>  </div>

  </li>

  <li>
          <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/dakrone/cheshire/fork" class="btn-with-count" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="5cU/ip/b31B+sTQpHOtzqsXV13V/SavoKDf1xLuVxaAPvI2iHz5eDiBTxd12EJSDDNqLLdFgdnJAfAJmG2qHxg==" /></div>
            <button
                type="submit"
                class="btn btn-sm btn-with-count"
                data-ga-click="Repository, show fork modal, action:blob#show; text:Fork"
                title="Fork your own copy of dakrone/cheshire to your account"
                aria-label="Fork your own copy of dakrone/cheshire to your account">
              <svg aria-hidden="true" class="octicon octicon-repo-forked" height="16" version="1.1" viewBox="0 0 10 16" width="10"><path fill-rule="evenodd" d="M8 1a1.993 1.993 0 0 0-1 3.72V6L5 8 3 6V4.72A1.993 1.993 0 0 0 2 1a1.993 1.993 0 0 0-1 3.72V6.5l3 3v1.78A1.993 1.993 0 0 0 5 15a1.993 1.993 0 0 0 1-3.72V9.5l3-3V4.72A1.993 1.993 0 0 0 8 1zM2 4.2C1.34 4.2.8 3.65.8 3c0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zm3 10c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zm3-10c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2z"/></svg>
              Fork
            </button>
</form>
    <a href="/dakrone/cheshire/network" class="social-count"
       aria-label="92 users forked this repository">
      92
    </a>
  </li>
</ul>

      <h1 class="public ">
  <svg aria-hidden="true" class="octicon octicon-repo" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M4 9H3V8h1v1zm0-3H3v1h1V6zm0-2H3v1h1V4zm0-2H3v1h1V2zm8-1v12c0 .55-.45 1-1 1H6v2l-1.5-1.5L3 16v-2H1c-.55 0-1-.45-1-1V1c0-.55.45-1 1-1h10c.55 0 1 .45 1 1zm-1 10H1v2h2v-1h3v1h5v-2zm0-10H2v9h9V1z"/></svg>
  <span class="author" itemprop="author"><a href="/dakrone" class="url fn" rel="author">dakrone</a></span><!--
--><span class="path-divider">/</span><!--
--><strong itemprop="name"><a href="/dakrone/cheshire" data-pjax="#js-repo-pjax-container">cheshire</a></strong>

</h1>

    </div>
    <div class="container">
      
<nav class="reponav js-repo-nav js-sidenav-container-pjax"
     itemscope
     itemtype="http://schema.org/BreadcrumbList"
     role="navigation"
     data-pjax="#js-repo-pjax-container">

  <span itemscope itemtype="http://schema.org/ListItem" itemprop="itemListElement">
    <a href="/dakrone/cheshire" class="js-selected-navigation-item selected reponav-item" data-hotkey="g c" data-selected-links="repo_source repo_downloads repo_commits repo_releases repo_tags repo_branches /dakrone/cheshire" itemprop="url">
      <svg aria-hidden="true" class="octicon octicon-code" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M9.5 3L8 4.5 11.5 8 8 11.5 9.5 13 14 8 9.5 3zm-5 0L0 8l4.5 5L6 11.5 2.5 8 6 4.5 4.5 3z"/></svg>
      <span itemprop="name">Code</span>
      <meta itemprop="position" content="1">
</a>  </span>

    <span itemscope itemtype="http://schema.org/ListItem" itemprop="itemListElement">
      <a href="/dakrone/cheshire/issues" class="js-selected-navigation-item reponav-item" data-hotkey="g i" data-selected-links="repo_issues repo_labels repo_milestones /dakrone/cheshire/issues" itemprop="url">
        <svg aria-hidden="true" class="octicon octicon-issue-opened" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M7 2.3c3.14 0 5.7 2.56 5.7 5.7s-2.56 5.7-5.7 5.7A5.71 5.71 0 0 1 1.3 8c0-3.14 2.56-5.7 5.7-5.7zM7 1C3.14 1 0 4.14 0 8s3.14 7 7 7 7-3.14 7-7-3.14-7-7-7zm1 3H6v5h2V4zm0 6H6v2h2v-2z"/></svg>
        <span itemprop="name">Issues</span>
        <span class="counter">19</span>
        <meta itemprop="position" content="2">
</a>    </span>

  <span itemscope itemtype="http://schema.org/ListItem" itemprop="itemListElement">
    <a href="/dakrone/cheshire/pulls" class="js-selected-navigation-item reponav-item" data-hotkey="g p" data-selected-links="repo_pulls /dakrone/cheshire/pulls" itemprop="url">
      <svg aria-hidden="true" class="octicon octicon-git-pull-request" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M11 11.28V5c-.03-.78-.34-1.47-.94-2.06C9.46 2.35 8.78 2.03 8 2H7V0L4 3l3 3V4h1c.27.02.48.11.69.31.21.2.3.42.31.69v6.28A1.993 1.993 0 0 0 10 15a1.993 1.993 0 0 0 1-3.72zm-1 2.92c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zM4 3c0-1.11-.89-2-2-2a1.993 1.993 0 0 0-1 3.72v6.56A1.993 1.993 0 0 0 2 15a1.993 1.993 0 0 0 1-3.72V4.72c.59-.34 1-.98 1-1.72zm-.8 10c0 .66-.55 1.2-1.2 1.2-.65 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2zM2 4.2C1.34 4.2.8 3.65.8 3c0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2z"/></svg>
      <span itemprop="name">Pull requests</span>
      <span class="counter">1</span>
      <meta itemprop="position" content="3">
</a>  </span>

    <a href="/dakrone/cheshire/projects" class="js-selected-navigation-item reponav-item" data-selected-links="repo_projects new_repo_project repo_project /dakrone/cheshire/projects">
      <svg aria-hidden="true" class="octicon octicon-project" height="16" version="1.1" viewBox="0 0 15 16" width="15"><path fill-rule="evenodd" d="M10 12h3V2h-3v10zm-4-2h3V2H6v8zm-4 4h3V2H2v12zm-1 1h13V1H1v14zM14 0H1a1 1 0 0 0-1 1v14a1 1 0 0 0 1 1h13a1 1 0 0 0 1-1V1a1 1 0 0 0-1-1z"/></svg>
      Projects
      <span class="counter">0</span>
</a>
    <a href="/dakrone/cheshire/wiki" class="js-selected-navigation-item reponav-item" data-hotkey="g w" data-selected-links="repo_wiki /dakrone/cheshire/wiki">
      <svg aria-hidden="true" class="octicon octicon-book" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M3 5h4v1H3V5zm0 3h4V7H3v1zm0 2h4V9H3v1zm11-5h-4v1h4V5zm0 2h-4v1h4V7zm0 2h-4v1h4V9zm2-6v9c0 .55-.45 1-1 1H9.5l-1 1-1-1H2c-.55 0-1-.45-1-1V3c0-.55.45-1 1-1h5.5l1 1 1-1H15c.55 0 1 .45 1 1zm-8 .5L7.5 3H2v9h6V3.5zm7-.5H9.5l-.5.5V12h6V3z"/></svg>
      Wiki
</a>

  <a href="/dakrone/cheshire/pulse" class="js-selected-navigation-item reponav-item" data-selected-links="pulse /dakrone/cheshire/pulse">
    <svg aria-hidden="true" class="octicon octicon-pulse" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M11.5 8L8.8 5.4 6.6 8.5 5.5 1.6 2.38 8H0v2h3.6l.9-1.8.9 5.4L9 8.5l1.6 1.5H14V8z"/></svg>
    Pulse
</a>
  <a href="/dakrone/cheshire/graphs" class="js-selected-navigation-item reponav-item" data-selected-links="repo_graphs repo_contributors /dakrone/cheshire/graphs">
    <svg aria-hidden="true" class="octicon octicon-graph" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M16 14v1H0V0h1v14h15zM5 13H3V8h2v5zm4 0H7V3h2v10zm4 0h-2V6h2v7z"/></svg>
    Graphs
</a>

</nav>

    </div>
  </div>

<div class="container new-discussion-timeline experiment-repo-nav">
  <div class="repository-content">

    
          

<a href="/dakrone/cheshire/blob/b341d9c96df0809431b483309b1173a42e36b6d6/README.md" class="d-none js-permalink-shortcut" data-hotkey="y">Permalink</a>

<!-- blob contrib key: blob_contributors:v21:72774b3b52bf9033c7698b710990bbc9 -->

<div class="file-navigation js-zeroclipboard-container">
  
<div class="select-menu branch-select-menu js-menu-container js-select-menu float-left">
  <button class=" btn btn-sm select-menu-button js-menu-target css-truncate" data-hotkey="w"
    
    type="button" aria-label="Switch branches or tags" tabindex="0" aria-haspopup="true">
      <i>Branch:</i>
      <span class="js-select-button css-truncate-target">master</span>
  </button>

  <div class="select-menu-modal-holder js-menu-content js-navigation-container" data-pjax>

    <div class="select-menu-modal">
      <div class="select-menu-header">
        <svg aria-label="Close" class="octicon octicon-x js-menu-close" height="16" role="img" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48z"/></svg>
        <span class="select-menu-title">Switch branches/tags</span>
      </div>

      <div class="select-menu-filters">
        <div class="select-menu-text-filter">
          <input type="text" aria-label="Filter branches/tags" id="context-commitish-filter-field" class="form-control js-filterable-field js-navigation-enable" placeholder="Filter branches/tags">
        </div>
        <div class="select-menu-tabs">
          <ul>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="branches" data-filter-placeholder="Filter branches/tags" class="js-select-menu-tab" role="tab">Branches</a>
            </li>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="tags" data-filter-placeholder="Find a tag…" class="js-select-menu-tab" role="tab">Tags</a>
            </li>
          </ul>
        </div>
      </div>

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="branches" role="menu">

        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/dakrone/cheshire/blob/combining-core-custom/README.md"
               data-name="combining-core-custom"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                combining-core-custom
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/dakrone/cheshire/blob/field-predicate-feature/README.md"
               data-name="field-predicate-feature"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                field-predicate-feature
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/dakrone/cheshire/blob/lazy-top-level-arrays/README.md"
               data-name="lazy-top-level-arrays"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                lazy-top-level-arrays
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open selected"
               href="/dakrone/cheshire/blob/master/README.md"
               data-name="master"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                master
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/dakrone/cheshire/blob/try-out-expectations/README.md"
               data-name="try-out-expectations"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                try-out-expectations
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/dakrone/cheshire/blob/unrolled-collections/README.md"
               data-name="unrolled-collections"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                unrolled-collections
              </span>
            </a>
        </div>

          <div class="select-menu-no-results">Nothing to show</div>
      </div>

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="tags">
        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/dakrone/cheshire/tree/5.7.0/README.md"
              data-name="5.7.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="5.7.0">
                5.7.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/dakrone/cheshire/tree/5.6.3/README.md"
              data-name="5.6.3"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="5.6.3">
                5.6.3
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/dakrone/cheshire/tree/5.6.2/README.md"
              data-name="5.6.2"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="5.6.2">
                5.6.2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/dakrone/cheshire/tree/5.6.1/README.md"
              data-name="5.6.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="5.6.1">
                5.6.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/dakrone/cheshire/tree/5.6.0/README.md"
              data-name="5.6.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="5.6.0">
                5.6.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/dakrone/cheshire/tree/5.5.0/README.md"
              data-name="5.5.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="5.5.0">
                5.5.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/dakrone/cheshire/tree/5.4.0/README.md"
              data-name="5.4.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="5.4.0">
                5.4.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/dakrone/cheshire/tree/5.3.1/README.md"
              data-name="5.3.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="5.3.1">
                5.3.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/dakrone/cheshire/tree/5.3.0/README.md"
              data-name="5.3.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="5.3.0">
                5.3.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/dakrone/cheshire/tree/5.2.0/README.md"
              data-name="5.2.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="5.2.0">
                5.2.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/dakrone/cheshire/tree/5.1.2/README.md"
              data-name="5.1.2"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="5.1.2">
                5.1.2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/dakrone/cheshire/tree/5.1.1/README.md"
              data-name="5.1.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="5.1.1">
                5.1.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/dakrone/cheshire/tree/5.1.0/README.md"
              data-name="5.1.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="5.1.0">
                5.1.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/dakrone/cheshire/tree/5.0.2/README.md"
              data-name="5.0.2"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="5.0.2">
                5.0.2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/dakrone/cheshire/tree/5.0.1/README.md"
              data-name="5.0.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="5.0.1">
                5.0.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/dakrone/cheshire/tree/5.0.0/README.md"
              data-name="5.0.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="5.0.0">
                5.0.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/dakrone/cheshire/tree/4.0.4/README.md"
              data-name="4.0.4"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="4.0.4">
                4.0.4
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/dakrone/cheshire/tree/4.0.3/README.md"
              data-name="4.0.3"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="4.0.3">
                4.0.3
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/dakrone/cheshire/tree/4.0.2/README.md"
              data-name="4.0.2"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="4.0.2">
                4.0.2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/dakrone/cheshire/tree/4.0.1/README.md"
              data-name="4.0.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="4.0.1">
                4.0.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/dakrone/cheshire/tree/4.0.0/README.md"
              data-name="4.0.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="4.0.0">
                4.0.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/dakrone/cheshire/tree/3.1.0/README.md"
              data-name="3.1.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="3.1.0">
                3.1.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/dakrone/cheshire/tree/3.0.0/README.md"
              data-name="3.0.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="3.0.0">
                3.0.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/dakrone/cheshire/tree/2.2.2/README.md"
              data-name="2.2.2"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="2.2.2">
                2.2.2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/dakrone/cheshire/tree/2.2.1/README.md"
              data-name="2.2.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="2.2.1">
                2.2.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/dakrone/cheshire/tree/2.2.0/README.md"
              data-name="2.2.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="2.2.0">
                2.2.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/dakrone/cheshire/tree/2.1.0/README.md"
              data-name="2.1.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="2.1.0">
                2.1.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/dakrone/cheshire/tree/2.0.6/README.md"
              data-name="2.0.6"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="2.0.6">
                2.0.6
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/dakrone/cheshire/tree/2.0.5/README.md"
              data-name="2.0.5"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="2.0.5">
                2.0.5
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/dakrone/cheshire/tree/2.0.4/README.md"
              data-name="2.0.4"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="2.0.4">
                2.0.4
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/dakrone/cheshire/tree/2.0.3/README.md"
              data-name="2.0.3"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="2.0.3">
                2.0.3
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/dakrone/cheshire/tree/2.0.2/README.md"
              data-name="2.0.2"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="2.0.2">
                2.0.2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/dakrone/cheshire/tree/2.0.1/README.md"
              data-name="2.0.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="2.0.1">
                2.0.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/dakrone/cheshire/tree/2.0.0/README.md"
              data-name="2.0.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="2.0.0">
                2.0.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/dakrone/cheshire/tree/1.1.4/README.md"
              data-name="1.1.4"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="1.1.4">
                1.1.4
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/dakrone/cheshire/tree/1.1.3/README.md"
              data-name="1.1.3"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="1.1.3">
                1.1.3
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/dakrone/cheshire/tree/1.1.1/README.md"
              data-name="1.1.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="1.1.1">
                1.1.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/dakrone/cheshire/tree/1.1.0/README.md"
              data-name="1.1.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="1.1.0">
                1.1.0
              </span>
            </a>
        </div>

        <div class="select-menu-no-results">Nothing to show</div>
      </div>

    </div>
  </div>
</div>

  <div class="BtnGroup float-right">
    <a href="/dakrone/cheshire/find/master"
          class="js-pjax-capture-input btn btn-sm BtnGroup-item"
          data-pjax
          data-hotkey="t">
      Find file
    </a>
    <button aria-label="Copy file path to clipboard" class="js-zeroclipboard btn btn-sm BtnGroup-item tooltipped tooltipped-s" data-copied-hint="Copied!" type="button">Copy path</button>
  </div>
  <div class="breadcrumb js-zeroclipboard-target">
    <span class="repo-root js-repo-root"><span class="js-path-segment"><a href="/dakrone/cheshire"><span>cheshire</span></a></span></span><span class="separator">/</span><strong class="final-path">README.md</strong>
  </div>
</div>



  <div class="commit-tease">
      <span class="float-right">
        <a class="commit-tease-sha" href="/dakrone/cheshire/commit/b341d9c96df0809431b483309b1173a42e36b6d6" data-pjax>
          b341d9c
        </a>
        <relative-time datetime="2017-03-29T16:12:28Z">Mar 29, 2017</relative-time>
      </span>
      <div>
        <img alt="@dakrone" class="avatar" height="20" src="https://avatars3.githubusercontent.com/u/19060?v=3&amp;s=40" width="20" />
        <a href="/dakrone" class="user-mention" rel="author">dakrone</a>
          <a href="/dakrone/cheshire/commit/b341d9c96df0809431b483309b1173a42e36b6d6" class="message" data-pjax="true" title="Document that top-level strings are allowed with example

Resolves #110">Document that top-level strings are allowed with example</a>
      </div>

    <div class="commit-tease-contributors">
      <button type="button" class="btn-link muted-link contributors-toggle" data-facebox="#blob_contributors_box">
        <strong>4</strong>
         contributors
      </button>
          <a class="avatar-link tooltipped tooltipped-s" aria-label="dakrone" href="/dakrone/cheshire/commits/master/README.md?author=dakrone"><img alt="@dakrone" class="avatar" height="20" src="https://avatars3.githubusercontent.com/u/19060?v=3&amp;s=40" width="20" /> </a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="mpenet" href="/dakrone/cheshire/commits/master/README.md?author=mpenet"><img alt="@mpenet" class="avatar" height="20" src="https://avatars0.githubusercontent.com/u/106390?v=3&amp;s=40" width="20" /> </a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="goodwink" href="/dakrone/cheshire/commits/master/README.md?author=goodwink"><img alt="@goodwink" class="avatar" height="20" src="https://avatars2.githubusercontent.com/u/14239?v=3&amp;s=40" width="20" /> </a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="bcambel" href="/dakrone/cheshire/commits/master/README.md?author=bcambel"><img alt="@bcambel" class="avatar" height="20" src="https://avatars0.githubusercontent.com/u/144385?v=3&amp;s=40" width="20" /> </a>


    </div>

    <div id="blob_contributors_box" style="display:none">
      <h2 class="facebox-header" data-facebox-id="facebox-header">Users who have contributed to this file</h2>
      <ul class="facebox-user-list" data-facebox-id="facebox-description">
          <li class="facebox-user-list-item">
            <img alt="@dakrone" height="24" src="https://avatars1.githubusercontent.com/u/19060?v=3&amp;s=48" width="24" />
            <a href="/dakrone">dakrone</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="@mpenet" height="24" src="https://avatars2.githubusercontent.com/u/106390?v=3&amp;s=48" width="24" />
            <a href="/mpenet">mpenet</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="@goodwink" height="24" src="https://avatars0.githubusercontent.com/u/14239?v=3&amp;s=48" width="24" />
            <a href="/goodwink">goodwink</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="@bcambel" height="24" src="https://avatars2.githubusercontent.com/u/144385?v=3&amp;s=48" width="24" />
            <a href="/bcambel">bcambel</a>
          </li>
      </ul>
    </div>
  </div>

<div class="file">
  <div class="file-header">
  <div class="file-actions">

    <div class="BtnGroup">
      <a href="/dakrone/cheshire/raw/master/README.md" class="btn btn-sm BtnGroup-item" id="raw-url">Raw</a>
        <a href="/dakrone/cheshire/blame/master/README.md" class="btn btn-sm js-update-url-with-hash BtnGroup-item" data-hotkey="b">Blame</a>
      <a href="/dakrone/cheshire/commits/master/README.md" class="btn btn-sm BtnGroup-item" rel="nofollow">History</a>
    </div>

        <a class="btn-octicon tooltipped tooltipped-nw"
           href="github-mac://openRepo/https://github.com/dakrone/cheshire?branch=master&amp;filepath=README.md"
           aria-label="Open this file in GitHub Desktop"
           data-ga-click="Repository, open with desktop, type:mac">
            <svg aria-hidden="true" class="octicon octicon-device-desktop" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M15 2H1c-.55 0-1 .45-1 1v9c0 .55.45 1 1 1h5.34c-.25.61-.86 1.39-2.34 2h8c-1.48-.61-2.09-1.39-2.34-2H15c.55 0 1-.45 1-1V3c0-.55-.45-1-1-1zm0 9H1V3h14v8z"/></svg>
        </a>

        <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/dakrone/cheshire/edit/master/README.md" class="inline-form js-update-url-with-hash" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="EuX9JJURJ7SK69lB14TxOInfsjg4HwEDHhJ/cz6uPzt/oFKR6BjJ4gv6ktvlwjTQ7i0lRs1QFdkCDXWygGTxEw==" /></div>
          <button class="btn-octicon tooltipped tooltipped-nw" type="submit"
            aria-label="Fork this project and edit the file" data-hotkey="e" data-disable-with>
            <svg aria-hidden="true" class="octicon octicon-pencil" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M0 12v3h3l8-8-3-3-8 8zm3 2H1v-2h1v1h1v1zm10.3-9.3L12 6 9 3l1.3-1.3a.996.996 0 0 1 1.41 0l1.59 1.59c.39.39.39 1.02 0 1.41z"/></svg>
          </button>
</form>        <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/dakrone/cheshire/delete/master/README.md" class="inline-form" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="ynDBH2AULBIXHhp4IXo6NvVH/7nogplafiW0DbhLfNEwFUwJIVReErHvPwCnkC2tEzKOKfQHmq7EzAiX+vpfig==" /></div>
          <button class="btn-octicon btn-octicon-danger tooltipped tooltipped-nw" type="submit"
            aria-label="Fork this project and delete the file" data-disable-with>
            <svg aria-hidden="true" class="octicon octicon-trashcan" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M11 2H9c0-.55-.45-1-1-1H5c-.55 0-1 .45-1 1H2c-.55 0-1 .45-1 1v1c0 .55.45 1 1 1v9c0 .55.45 1 1 1h7c.55 0 1-.45 1-1V5c.55 0 1-.45 1-1V3c0-.55-.45-1-1-1zm-1 12H3V5h1v8h1V5h1v8h1V5h1v8h1V5h1v9zm1-10H2V3h9v1z"/></svg>
          </button>
</form>  </div>

  <div class="file-info">
      357 lines (273 sloc)
      <span class="file-info-divider"></span>
    10.7 KB
  </div>
</div>

  
  <div id="readme" class="readme blob instapaper_body">
    <article class="markdown-body entry-content" itemprop="text"><h1><a id="user-content-cheshire" class="anchor" href="#cheshire" aria-hidden="true"><svg aria-hidden="true" class="octicon octicon-link" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M4 9h1v1H4c-1.5 0-3-1.69-3-3.5S2.55 3 4 3h4c1.45 0 3 1.69 3 3.5 0 1.41-.91 2.72-2 3.25V8.59c.58-.45 1-1.27 1-2.09C10 5.22 8.98 4 8 4H4c-.98 0-2 1.22-2 2.5S3 9 4 9zm9-3h-1v1h1c1 0 2 1.22 2 2.5S13.98 12 13 12H9c-.98 0-2-1.22-2-2.5 0-.83.42-1.64 1-2.09V6.25c-1.09.53-2 1.84-2 3.25C6 11.31 7.55 13 9 13h4c1.45 0 3-1.69 3-3.5S14.5 6 13 6z"></path></svg></a>Cheshire</h1>
<p><a href="https://camo.githubusercontent.com/12afaee63cf5c2a2e8600a4052a36e83982f66f6/687474703a2f2f64616b726f6e652e6769746875622e636f6d2f63686573686972652f63686573686972655f736d616c6c2e6a7067" target="_blank"><img src="https://camo.githubusercontent.com/12afaee63cf5c2a2e8600a4052a36e83982f66f6/687474703a2f2f64616b726f6e652e6769746875622e636f6d2f63686573686972652f63686573686972655f736d616c6c2e6a7067" title=":)" align="left" data-canonical-src="http://dakrone.github.com/cheshire/cheshire_small.jpg" style="max-width:100%;"></a>

'Cheshire Puss,' she began, rather timidly, as she did not at all know
whether it would like the name: however, it only grinned a little
wider.  'Come, it's pleased so far,' thought Alice, and she went
on. 'Would you tell me, please, which way I ought to go from here?'</p>
<p>'That depends a good deal on where you want to get to,' said the Cat.</p>
<p>'I don't much care where--' said Alice.</p>
<p>'Then it doesn't matter which way you go,' said the Cat.</p>
<p>'--so long as I get SOMEWHERE,' Alice added as an explanation.</p>
<p>'Oh, you're sure to do that,' said the Cat, 'if you only walk long
enough.'

<br clear="all"><br>
Cheshire is fast JSON encoding, based off of clj-json and
clojure-json, with additional features like Date/UUID/Set/Symbol
encoding and SMILE support.</p>
<p><a href="http://dakrone.github.com/cheshire/">Clojure code with docs</a></p>
<p><a href="http://travis-ci.org/dakrone/cheshire"><img src="https://camo.githubusercontent.com/a1f7ca63320b4bd412c13ddeff361b6ab403589c/68747470733a2f2f7365637572652e7472617669732d63692e6f72672f64616b726f6e652f63686573686972652e706e67" alt="Continuous Integration status" data-canonical-src="https://secure.travis-ci.org/dakrone/cheshire.png" style="max-width:100%;"></a></p>
<h2><a id="user-content-why" class="anchor" href="#why" aria-hidden="true"><svg aria-hidden="true" class="octicon octicon-link" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M4 9h1v1H4c-1.5 0-3-1.69-3-3.5S2.55 3 4 3h4c1.45 0 3 1.69 3 3.5 0 1.41-.91 2.72-2 3.25V8.59c.58-.45 1-1.27 1-2.09C10 5.22 8.98 4 8 4H4c-.98 0-2 1.22-2 2.5S3 9 4 9zm9-3h-1v1h1c1 0 2 1.22 2 2.5S13.98 12 13 12H9c-.98 0-2-1.22-2-2.5 0-.83.42-1.64 1-2.09V6.25c-1.09.53-2 1.84-2 3.25C6 11.31 7.55 13 9 13h4c1.45 0 3-1.69 3-3.5S14.5 6 13 6z"></path></svg></a>Why?</h2>
<p>clojure-json had really nice features (custom encoders), but was slow;
clj-json had no features, but was fast. Cheshire encodes JSON fast,
with added support for more types and the ability to use custom
encoders.</p>
<h2><a id="user-content-usage" class="anchor" href="#usage" aria-hidden="true"><svg aria-hidden="true" class="octicon octicon-link" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M4 9h1v1H4c-1.5 0-3-1.69-3-3.5S2.55 3 4 3h4c1.45 0 3 1.69 3 3.5 0 1.41-.91 2.72-2 3.25V8.59c.58-.45 1-1.27 1-2.09C10 5.22 8.98 4 8 4H4c-.98 0-2 1.22-2 2.5S3 9 4 9zm9-3h-1v1h1c1 0 2 1.22 2 2.5S13.98 12 13 12H9c-.98 0-2-1.22-2-2.5 0-.83.42-1.64 1-2.09V6.25c-1.09.53-2 1.84-2 3.25C6 11.31 7.55 13 9 13h4c1.45 0 3-1.69 3-3.5S14.5 6 13 6z"></path></svg></a>Usage</h2>
<div class="highlight highlight-source-clojure"><pre>[cheshire <span class="pl-s"><span class="pl-pds">"</span>5.7.0<span class="pl-pds">"</span></span>]

<span class="pl-c"><span class="pl-c">;</span>; Cheshire v5.7.0 uses Jackson 2.8.6</span>

<span class="pl-c"><span class="pl-c">;</span>; In your ns statement:</span>
(<span class="pl-k">ns</span> <span class="pl-e">my.ns</span>
  (<span class="pl-c1">:require</span> [cheshire.core <span class="pl-c1">:refer</span> <span class="pl-c1">:all</span>]))</pre></div>
<h3><a id="user-content-encoding" class="anchor" href="#encoding" aria-hidden="true"><svg aria-hidden="true" class="octicon octicon-link" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M4 9h1v1H4c-1.5 0-3-1.69-3-3.5S2.55 3 4 3h4c1.45 0 3 1.69 3 3.5 0 1.41-.91 2.72-2 3.25V8.59c.58-.45 1-1.27 1-2.09C10 5.22 8.98 4 8 4H4c-.98 0-2 1.22-2 2.5S3 9 4 9zm9-3h-1v1h1c1 0 2 1.22 2 2.5S13.98 12 13 12H9c-.98 0-2-1.22-2-2.5 0-.83.42-1.64 1-2.09V6.25c-1.09.53-2 1.84-2 3.25C6 11.31 7.55 13 9 13h4c1.45 0 3-1.69 3-3.5S14.5 6 13 6z"></path></svg></a>Encoding</h3>
<div class="highlight highlight-source-clojure"><pre><span class="pl-c"><span class="pl-c">;</span>; generate some json</span>
(<span class="pl-en">generate-string</span> {<span class="pl-c1">:foo</span> <span class="pl-s"><span class="pl-pds">"</span>bar<span class="pl-pds">"</span></span> <span class="pl-c1">:baz</span> <span class="pl-c1">5</span>})

<span class="pl-c"><span class="pl-c">;</span>; write some json to a stream</span>
(<span class="pl-en">generate-stream</span> {<span class="pl-c1">:foo</span> <span class="pl-s"><span class="pl-pds">"</span>bar<span class="pl-pds">"</span></span> <span class="pl-c1">:baz</span> <span class="pl-c1">5</span>} (<span class="pl-en">clojure.java.io/writer</span> <span class="pl-s"><span class="pl-pds">"</span>/tmp/foo<span class="pl-pds">"</span></span>))

<span class="pl-c"><span class="pl-c">;</span>; generate some SMILE</span>
(<span class="pl-en">generate-smile</span> {<span class="pl-c1">:foo</span> <span class="pl-s"><span class="pl-pds">"</span>bar<span class="pl-pds">"</span></span> <span class="pl-c1">:baz</span> <span class="pl-c1">5</span>})

<span class="pl-c"><span class="pl-c">;</span>; generate some JSON with Dates</span>
<span class="pl-c"><span class="pl-c">;</span>; the Date will be encoded as a string using</span>
<span class="pl-c"><span class="pl-c">;</span>; the default date format: yyyy-MM-dd'T'HH:mm:ss'Z'</span>
(<span class="pl-en">generate-string</span> {<span class="pl-c1">:foo</span> <span class="pl-s"><span class="pl-pds">"</span>bar<span class="pl-pds">"</span></span> <span class="pl-c1">:baz</span> (<span class="pl-en">java.util.Date.</span> <span class="pl-c1">0</span>)})

<span class="pl-c"><span class="pl-c">;</span>; generate some JSON with Dates with custom Date encoding</span>
(<span class="pl-en">generate-string</span> {<span class="pl-c1">:baz</span> (<span class="pl-en">java.util.Date.</span> <span class="pl-c1">0</span>)} {<span class="pl-c1">:date-format</span> <span class="pl-s"><span class="pl-pds">"</span>yyyy-MM-dd<span class="pl-pds">"</span></span>})

<span class="pl-c"><span class="pl-c">;</span>; generate some JSON with pretty formatting</span>
(<span class="pl-en">generate-string</span> {<span class="pl-c1">:foo</span> <span class="pl-s"><span class="pl-pds">"</span>bar<span class="pl-pds">"</span></span> <span class="pl-c1">:baz</span> {<span class="pl-c1">:eggplant</span> [<span class="pl-c1">1</span> <span class="pl-c1">2</span> <span class="pl-c1">3</span>]}} {<span class="pl-c1">:pretty</span> <span class="pl-c1">true</span>})
<span class="pl-c"><span class="pl-c">;</span>; {</span>
<span class="pl-c"><span class="pl-c">;</span>;   "foo" : "bar",</span>
<span class="pl-c"><span class="pl-c">;</span>;   "baz" : {</span>
<span class="pl-c"><span class="pl-c">;</span>;     "eggplant" : [ 1, 2, 3 ]</span>
<span class="pl-c"><span class="pl-c">;</span>;   }</span>
<span class="pl-c"><span class="pl-c">;</span>; }</span>

<span class="pl-c"><span class="pl-c">;</span>; generate JSON escaping UTF-8</span>
(<span class="pl-en">generate-string</span> {<span class="pl-c1">:foo</span> <span class="pl-s"><span class="pl-pds">"</span>It costs £100<span class="pl-pds">"</span></span>} {<span class="pl-c1">:escape-non-ascii</span> <span class="pl-c1">true</span>})
<span class="pl-c"><span class="pl-c">;</span>; =&gt; "{\"foo\":\"It costs \\u00A3100\"}"</span>

<span class="pl-c"><span class="pl-c">;</span>; generate JSON and munge keys with a custom function</span>
(<span class="pl-en">generate-string</span> {<span class="pl-c1">:foo</span> <span class="pl-s"><span class="pl-pds">"</span>bar<span class="pl-pds">"</span></span>} {<span class="pl-c1">:key-fn</span> (<span class="pl-k">fn</span> [k] (<span class="pl-en">.toUpperCase</span> (<span class="pl-en">name</span> k)))})
<span class="pl-c"><span class="pl-c">;</span>; =&gt; "{\"FOO\":\"bar\"}"</span></pre></div>
<p>In the event encoding fails, Cheshire will throw a JsonGenerationException.</p>
<h4><a id="user-content-custom-pretty-printing-options" class="anchor" href="#custom-pretty-printing-options" aria-hidden="true"><svg aria-hidden="true" class="octicon octicon-link" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M4 9h1v1H4c-1.5 0-3-1.69-3-3.5S2.55 3 4 3h4c1.45 0 3 1.69 3 3.5 0 1.41-.91 2.72-2 3.25V8.59c.58-.45 1-1.27 1-2.09C10 5.22 8.98 4 8 4H4c-.98 0-2 1.22-2 2.5S3 9 4 9zm9-3h-1v1h1c1 0 2 1.22 2 2.5S13.98 12 13 12H9c-.98 0-2-1.22-2-2.5 0-.83.42-1.64 1-2.09V6.25c-1.09.53-2 1.84-2 3.25C6 11.31 7.55 13 9 13h4c1.45 0 3-1.69 3-3.5S14.5 6 13 6z"></path></svg></a>Custom Pretty Printing Options</h4>
<p>If Jackson's default pretty printing library is not what you desire, you can
manually create your own pretty printing class and pass to the <code>generate-string</code>
or <code>encode</code> methods:</p>
<div class="highlight highlight-source-clojure"><pre>(<span class="pl-k">let</span> [my-pretty-printer (<span class="pl-en">create-pretty-printer</span>
                          (<span class="pl-en">assoc</span> <span class="pl-k">default-pretty-print-options</span>
                                 <span class="pl-c1">:indent-arrays?</span> <span class="pl-c1">true</span>))]
  (<span class="pl-en">generate-string</span> {<span class="pl-c1">:foo</span> [<span class="pl-c1">1</span> <span class="pl-c1">2</span> <span class="pl-c1">3</span>]} {<span class="pl-c1">:pretty</span> my-pretty-printer}))</pre></div>
<p>See the <code>default-pretty-print-options</code> for a list of options that can be
changed.</p>
<h3><a id="user-content-decoding" class="anchor" href="#decoding" aria-hidden="true"><svg aria-hidden="true" class="octicon octicon-link" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M4 9h1v1H4c-1.5 0-3-1.69-3-3.5S2.55 3 4 3h4c1.45 0 3 1.69 3 3.5 0 1.41-.91 2.72-2 3.25V8.59c.58-.45 1-1.27 1-2.09C10 5.22 8.98 4 8 4H4c-.98 0-2 1.22-2 2.5S3 9 4 9zm9-3h-1v1h1c1 0 2 1.22 2 2.5S13.98 12 13 12H9c-.98 0-2-1.22-2-2.5 0-.83.42-1.64 1-2.09V6.25c-1.09.53-2 1.84-2 3.25C6 11.31 7.55 13 9 13h4c1.45 0 3-1.69 3-3.5S14.5 6 13 6z"></path></svg></a>Decoding</h3>
<div class="highlight highlight-source-clojure"><pre><span class="pl-c"><span class="pl-c">;</span>; parse some json</span>
(<span class="pl-en">parse-string</span> <span class="pl-s"><span class="pl-pds">"</span>{<span class="pl-cce">\"</span>foo<span class="pl-cce">\"</span>:<span class="pl-cce">\"</span>bar<span class="pl-cce">\"</span>}<span class="pl-pds">"</span></span>)
<span class="pl-c"><span class="pl-c">;</span>; =&gt; {"foo" "bar"}</span>

<span class="pl-c"><span class="pl-c">;</span>; parse some json and get keywords back</span>
(<span class="pl-en">parse-string</span> <span class="pl-s"><span class="pl-pds">"</span>{<span class="pl-cce">\"</span>foo<span class="pl-cce">\"</span>:<span class="pl-cce">\"</span>bar<span class="pl-cce">\"</span>}<span class="pl-pds">"</span></span> <span class="pl-c1">true</span>)
<span class="pl-c"><span class="pl-c">;</span>; =&gt; {:foo "bar"}</span>

<span class="pl-c"><span class="pl-c">;</span>; parse some json and munge keywords with a custom function</span>
(<span class="pl-en">parse-string</span> <span class="pl-s"><span class="pl-pds">"</span>{<span class="pl-cce">\"</span>foo<span class="pl-cce">\"</span>:<span class="pl-cce">\"</span>bar<span class="pl-cce">\"</span>}<span class="pl-pds">"</span></span> (<span class="pl-k">fn</span> [k] (<span class="pl-en">keyword</span> (<span class="pl-en">.toUpperCase</span> k))))
<span class="pl-c"><span class="pl-c">;</span>; =&gt; {:FOO "bar"}</span>

<span class="pl-c"><span class="pl-c">;</span>; top-level strings are valid JSON too</span>
(<span class="pl-en">parse-string</span> <span class="pl-s"><span class="pl-pds">"</span><span class="pl-cce">\"</span>foo<span class="pl-cce">\"</span><span class="pl-pds">"</span></span>)
<span class="pl-c"><span class="pl-c">;</span>; =&gt; "foo"</span>

<span class="pl-c"><span class="pl-c">;</span>; parse some SMILE (keywords option also supported)</span>
(<span class="pl-en">parse-smile</span> &lt;your-byte-array&gt;)

<span class="pl-c"><span class="pl-c">;</span>; parse a stream (keywords option also supported)</span>
(<span class="pl-en">parse-stream</span> (<span class="pl-en">clojure.java.io/reader</span> <span class="pl-s"><span class="pl-pds">"</span>/tmp/foo<span class="pl-pds">"</span></span>))

<span class="pl-c"><span class="pl-c">;</span>; parse a stream lazily (keywords option also supported)</span>
(<span class="pl-en">parsed-seq</span> (<span class="pl-en">clojure.java.io/reader</span> <span class="pl-s"><span class="pl-pds">"</span>/tmp/foo<span class="pl-pds">"</span></span>))

<span class="pl-c"><span class="pl-c">;</span>; parse a SMILE stream lazily (keywords option also supported)</span>
(<span class="pl-en">parsed-smile-seq</span> (<span class="pl-en">clojure.java.io/reader</span> <span class="pl-s"><span class="pl-pds">"</span>/tmp/foo<span class="pl-pds">"</span></span>))</pre></div>
<p>In 2.0.4 and up, Cheshire allows passing in a
function to specify what kind of types to return, like so:</p>
<div class="highlight highlight-source-clojure"><pre><span class="pl-c"><span class="pl-c">;</span>; In this example a function that checks for a certain key</span>
(<span class="pl-en">decode</span> <span class="pl-s"><span class="pl-pds">"</span>{<span class="pl-cce">\"</span>myarray<span class="pl-cce">\"</span>:[2,3,3,2],<span class="pl-cce">\"</span>myset<span class="pl-cce">\"</span>:[1,2,2,1]}<span class="pl-pds">"</span></span> <span class="pl-c1">true</span>
        (<span class="pl-k">fn</span> [field-name]
          (<span class="pl-k">if</span> (<span class="pl-en">=</span> field-name <span class="pl-s"><span class="pl-pds">"</span>myset<span class="pl-pds">"</span></span>)
            #{}
            [])))
<span class="pl-c"><span class="pl-c">;</span>; =&gt; {:myarray [2 3 3 2], :myset #{1 2}}</span></pre></div>
<p>The type must be "transient-able", so use either #{} or []</p>
<h3><a id="user-content-custom-encoders" class="anchor" href="#custom-encoders" aria-hidden="true"><svg aria-hidden="true" class="octicon octicon-link" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M4 9h1v1H4c-1.5 0-3-1.69-3-3.5S2.55 3 4 3h4c1.45 0 3 1.69 3 3.5 0 1.41-.91 2.72-2 3.25V8.59c.58-.45 1-1.27 1-2.09C10 5.22 8.98 4 8 4H4c-.98 0-2 1.22-2 2.5S3 9 4 9zm9-3h-1v1h1c1 0 2 1.22 2 2.5S13.98 12 13 12H9c-.98 0-2-1.22-2-2.5 0-.83.42-1.64 1-2.09V6.25c-1.09.53-2 1.84-2 3.25C6 11.31 7.55 13 9 13h4c1.45 0 3-1.69 3-3.5S14.5 6 13 6z"></path></svg></a>Custom Encoders</h3>
<p>Custom encoding is supported from 2.0.0 and up, if you encounter a
bug, please open a github issue. From 5.0.0 onwards, custom encoding
has been moved to be part of the core namespace (not requiring a
namespace change)</p>
<div class="highlight highlight-source-clojure"><pre><span class="pl-c"><span class="pl-c">;</span>; Custom encoders allow you to swap out the api for the fast</span>
<span class="pl-c"><span class="pl-c">;</span>; encoder with one that is slightly slower, but allows custom</span>
<span class="pl-c"><span class="pl-c">;</span>; things to be encoded:</span>
(<span class="pl-k">ns</span> <span class="pl-e">myns</span>
  (<span class="pl-c1">:require</span> [cheshire.core <span class="pl-c1">:refer</span> <span class="pl-c1">:all</span>]
            [cheshire.generate <span class="pl-c1">:refer</span> [add-encoder encode-str remove-encoder]]))

<span class="pl-c"><span class="pl-c">;</span>; First, add a custom encoder for a class:</span>
(<span class="pl-en">add-encoder</span> java.awt.Color
             (<span class="pl-k">fn</span> [c jsonGenerator]
               (<span class="pl-en">.writeString</span> jsonGenerator (<span class="pl-en">str</span> c))))

<span class="pl-c"><span class="pl-c">;</span>; There are also helpers for common encoding actions:</span>
(<span class="pl-en">add-encoder</span> java.net.URL encode-str)

<span class="pl-c"><span class="pl-c">;</span>; List of common encoders that can be used: (see generate.clj)</span>
<span class="pl-c"><span class="pl-c">;</span>; encode-nil</span>
<span class="pl-c"><span class="pl-c">;</span>; encode-number</span>
<span class="pl-c"><span class="pl-c">;</span>; encode-seq</span>
<span class="pl-c"><span class="pl-c">;</span>; encode-date</span>
<span class="pl-c"><span class="pl-c">;</span>; encode-bool</span>
<span class="pl-c"><span class="pl-c">;</span>; encode-named</span>
<span class="pl-c"><span class="pl-c">;</span>; encode-map</span>
<span class="pl-c"><span class="pl-c">;</span>; encode-symbol</span>
<span class="pl-c"><span class="pl-c">;</span>; encode-ratio</span>

<span class="pl-c"><span class="pl-c">;</span>; Then you can use encode from the custom namespace as normal</span>
(<span class="pl-en">encode</span> (<span class="pl-en">java.awt.Color.</span> <span class="pl-c1">1</span> <span class="pl-c1">2</span> <span class="pl-c1">3</span>))
<span class="pl-c"><span class="pl-c">;</span>; =&gt; "java.awt.Color[r=1,g=2,b=3]"</span>

<span class="pl-c"><span class="pl-c">;</span>; Custom encoders can also be removed:</span>
(<span class="pl-en">remove-encoder</span> java.awt.Color)

<span class="pl-c"><span class="pl-c">;</span>; Decoding remains the same, you are responsible for doing custom decoding.</span></pre></div>
<h3><a id="user-content-note-cheshirecustom-has-been-deprecated-in-version-500" class="anchor" href="#note-cheshirecustom-has-been-deprecated-in-version-500" aria-hidden="true"><svg aria-hidden="true" class="octicon octicon-link" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M4 9h1v1H4c-1.5 0-3-1.69-3-3.5S2.55 3 4 3h4c1.45 0 3 1.69 3 3.5 0 1.41-.91 2.72-2 3.25V8.59c.58-.45 1-1.27 1-2.09C10 5.22 8.98 4 8 4H4c-.98 0-2 1.22-2 2.5S3 9 4 9zm9-3h-1v1h1c1 0 2 1.22 2 2.5S13.98 12 13 12H9c-.98 0-2-1.22-2-2.5 0-.83.42-1.64 1-2.09V6.25c-1.09.53-2 1.84-2 3.25C6 11.31 7.55 13 9 13h4c1.45 0 3-1.69 3-3.5S14.5 6 13 6z"></path></svg></a>NOTE: `cheshire.custom` has been deprecated in version 5.0.0</h3>
<p>Custom and Core encoding have been combined in Cheshire 5.0.0, so
there is no longer any need to require a different namespace depending
on what you would like to use.</p>
<h3><a id="user-content-aliases" class="anchor" href="#aliases" aria-hidden="true"><svg aria-hidden="true" class="octicon octicon-link" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M4 9h1v1H4c-1.5 0-3-1.69-3-3.5S2.55 3 4 3h4c1.45 0 3 1.69 3 3.5 0 1.41-.91 2.72-2 3.25V8.59c.58-.45 1-1.27 1-2.09C10 5.22 8.98 4 8 4H4c-.98 0-2 1.22-2 2.5S3 9 4 9zm9-3h-1v1h1c1 0 2 1.22 2 2.5S13.98 12 13 12H9c-.98 0-2-1.22-2-2.5 0-.83.42-1.64 1-2.09V6.25c-1.09.53-2 1.84-2 3.25C6 11.31 7.55 13 9 13h4c1.45 0 3-1.69 3-3.5S14.5 6 13 6z"></path></svg></a>Aliases</h3>
<p>There are also a few aliases for commonly used functions:</p>
<pre><code>encode -&gt; generate-string
encode-stream -&gt; generate-stream
encode-smile -&gt; generate-smile
decode -&gt; parse-string
decode-stream -&gt; parse-stream
decode-smile -&gt; parse-smile
</code></pre>
<h2><a id="user-content-features" class="anchor" href="#features" aria-hidden="true"><svg aria-hidden="true" class="octicon octicon-link" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M4 9h1v1H4c-1.5 0-3-1.69-3-3.5S2.55 3 4 3h4c1.45 0 3 1.69 3 3.5 0 1.41-.91 2.72-2 3.25V8.59c.58-.45 1-1.27 1-2.09C10 5.22 8.98 4 8 4H4c-.98 0-2 1.22-2 2.5S3 9 4 9zm9-3h-1v1h1c1 0 2 1.22 2 2.5S13.98 12 13 12H9c-.98 0-2-1.22-2-2.5 0-.83.42-1.64 1-2.09V6.25c-1.09.53-2 1.84-2 3.25C6 11.31 7.55 13 9 13h4c1.45 0 3-1.69 3-3.5S14.5 6 13 6z"></path></svg></a>Features</h2>
<p>Cheshire supports encoding standard clojure datastructures, with a few
additions.</p>
<p>Cheshire encoding supports:</p>
<h3><a id="user-content-clojure-data-structures" class="anchor" href="#clojure-data-structures" aria-hidden="true"><svg aria-hidden="true" class="octicon octicon-link" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M4 9h1v1H4c-1.5 0-3-1.69-3-3.5S2.55 3 4 3h4c1.45 0 3 1.69 3 3.5 0 1.41-.91 2.72-2 3.25V8.59c.58-.45 1-1.27 1-2.09C10 5.22 8.98 4 8 4H4c-.98 0-2 1.22-2 2.5S3 9 4 9zm9-3h-1v1h1c1 0 2 1.22 2 2.5S13.98 12 13 12H9c-.98 0-2-1.22-2-2.5 0-.83.42-1.64 1-2.09V6.25c-1.09.53-2 1.84-2 3.25C6 11.31 7.55 13 9 13h4c1.45 0 3-1.69 3-3.5S14.5 6 13 6z"></path></svg></a>Clojure data structures</h3>
<ul>
<li>strings</li>
<li>lists</li>
<li>vectors</li>
<li>sets</li>
<li>maps</li>
<li>symbols</li>
<li>booleans</li>
<li>keywords (qualified and unqualified)</li>
<li>numbers (Integer, Long, BigInteger, BigInt, Double, Float, Ratio,
Short, Byte, primatives)</li>
<li>clojure.lang.PersistentQueue</li>
</ul>
<h3><a id="user-content-java-classes" class="anchor" href="#java-classes" aria-hidden="true"><svg aria-hidden="true" class="octicon octicon-link" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M4 9h1v1H4c-1.5 0-3-1.69-3-3.5S2.55 3 4 3h4c1.45 0 3 1.69 3 3.5 0 1.41-.91 2.72-2 3.25V8.59c.58-.45 1-1.27 1-2.09C10 5.22 8.98 4 8 4H4c-.98 0-2 1.22-2 2.5S3 9 4 9zm9-3h-1v1h1c1 0 2 1.22 2 2.5S13.98 12 13 12H9c-.98 0-2-1.22-2-2.5 0-.83.42-1.64 1-2.09V6.25c-1.09.53-2 1.84-2 3.25C6 11.31 7.55 13 9 13h4c1.45 0 3-1.69 3-3.5S14.5 6 13 6z"></path></svg></a>Java classes</h3>
<ul>
<li>Date</li>
<li>UUID</li>
<li>java.sql.Timestamp</li>
<li>any java.util.Set</li>
<li>any java.util.Map</li>
<li>any java.util.List</li>
</ul>
<h3><a id="user-content-custom-class-encoding-while-still-being-fast" class="anchor" href="#custom-class-encoding-while-still-being-fast" aria-hidden="true"><svg aria-hidden="true" class="octicon octicon-link" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M4 9h1v1H4c-1.5 0-3-1.69-3-3.5S2.55 3 4 3h4c1.45 0 3 1.69 3 3.5 0 1.41-.91 2.72-2 3.25V8.59c.58-.45 1-1.27 1-2.09C10 5.22 8.98 4 8 4H4c-.98 0-2 1.22-2 2.5S3 9 4 9zm9-3h-1v1h1c1 0 2 1.22 2 2.5S13.98 12 13 12H9c-.98 0-2-1.22-2-2.5 0-.83.42-1.64 1-2.09V6.25c-1.09.53-2 1.84-2 3.25C6 11.31 7.55 13 9 13h4c1.45 0 3-1.69 3-3.5S14.5 6 13 6z"></path></svg></a>Custom class encoding while still being fast</h3>
<h3><a id="user-content-also-supports" class="anchor" href="#also-supports" aria-hidden="true"><svg aria-hidden="true" class="octicon octicon-link" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M4 9h1v1H4c-1.5 0-3-1.69-3-3.5S2.55 3 4 3h4c1.45 0 3 1.69 3 3.5 0 1.41-.91 2.72-2 3.25V8.59c.58-.45 1-1.27 1-2.09C10 5.22 8.98 4 8 4H4c-.98 0-2 1.22-2 2.5S3 9 4 9zm9-3h-1v1h1c1 0 2 1.22 2 2.5S13.98 12 13 12H9c-.98 0-2-1.22-2-2.5 0-.83.42-1.64 1-2.09V6.25c-1.09.53-2 1.84-2 3.25C6 11.31 7.55 13 9 13h4c1.45 0 3-1.69 3-3.5S14.5 6 13 6z"></path></svg></a>Also supports</h3>
<ul>
<li>Stream encoding/decoding</li>
<li>Lazy decoding</li>
<li>Pretty-printing JSON generation</li>
<li>Unicode escaping</li>
<li>Custom keyword coercion</li>
<li>Arbitrary precision for decoded values:</li>
</ul>
<p>Cheshire will automatically use a BigInteger if needed for
non-floating-point numbers, however, for floating-point numbers,
Doubles will be used unless the <code>*use-bigdecimals?*</code> symbol is bound
to true:</p>
<div class="highlight highlight-source-clojure"><pre>(<span class="pl-k">ns</span> <span class="pl-e">foo.bar</span>
  (<span class="pl-k">require</span> [cheshire.core <span class="pl-c1">:as</span> json]
           [cheshire.parse <span class="pl-c1">:as</span> parse]))

(<span class="pl-en">json/decode</span> <span class="pl-s"><span class="pl-pds">"</span>111111111111111111111111111111111.111111111111111111111111111111111111<span class="pl-pds">"</span></span>)
<span class="pl-c"><span class="pl-c">;</span>; =&gt; 1.1111111111111112E32 (a Double)</span>

(<span class="pl-k">binding</span> [parse/*use-bigdecimals?* <span class="pl-c1">true</span>]
  (<span class="pl-en">json/decode</span> <span class="pl-s"><span class="pl-pds">"</span>111111111111111111111111111111111.111111111111111111111111111111111111<span class="pl-pds">"</span></span>))
<span class="pl-c"><span class="pl-c">;</span>; =&gt; 111111111111111111111111111111111.111111111111111111111111111111111111M (a BigDecimal)</span></pre></div>
<ul>
<li>Replacing default encoders for builtin types</li>
<li><a href="http://wiki.fasterxml.com/SmileFormatSpec">SMILE encoding/decoding</a></li>
</ul>
<h2><a id="user-content-change-log" class="anchor" href="#change-log" aria-hidden="true"><svg aria-hidden="true" class="octicon octicon-link" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M4 9h1v1H4c-1.5 0-3-1.69-3-3.5S2.55 3 4 3h4c1.45 0 3 1.69 3 3.5 0 1.41-.91 2.72-2 3.25V8.59c.58-.45 1-1.27 1-2.09C10 5.22 8.98 4 8 4H4c-.98 0-2 1.22-2 2.5S3 9 4 9zm9-3h-1v1h1c1 0 2 1.22 2 2.5S13.98 12 13 12H9c-.98 0-2-1.22-2-2.5 0-.83.42-1.64 1-2.09V6.25c-1.09.53-2 1.84-2 3.25C6 11.31 7.55 13 9 13h4c1.45 0 3-1.69 3-3.5S14.5 6 13 6z"></path></svg></a>Change Log</h2>
<p><a href="https://github.com/dakrone/cheshire/blob/master/ChangeLog.md">Change log</a> is available on GitHub.</p>
<h2><a id="user-content-speed" class="anchor" href="#speed" aria-hidden="true"><svg aria-hidden="true" class="octicon octicon-link" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M4 9h1v1H4c-1.5 0-3-1.69-3-3.5S2.55 3 4 3h4c1.45 0 3 1.69 3 3.5 0 1.41-.91 2.72-2 3.25V8.59c.58-.45 1-1.27 1-2.09C10 5.22 8.98 4 8 4H4c-.98 0-2 1.22-2 2.5S3 9 4 9zm9-3h-1v1h1c1 0 2 1.22 2 2.5S13.98 12 13 12H9c-.98 0-2-1.22-2-2.5 0-.83.42-1.64 1-2.09V6.25c-1.09.53-2 1.84-2 3.25C6 11.31 7.55 13 9 13h4c1.45 0 3-1.69 3-3.5S14.5 6 13 6z"></path></svg></a>Speed</h2>
<p>Cheshire is about twice as fast as data.json.</p>
<p>Check out the benchmarks in <code>cheshire.test.benchmark</code>; or run <code>lein benchmark</code>. If you have scenarios where Cheshire is not performing as
well as expected (compared to a different library), please let me
know.</p>
<h2><a id="user-content-experimental-things" class="anchor" href="#experimental-things" aria-hidden="true"><svg aria-hidden="true" class="octicon octicon-link" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M4 9h1v1H4c-1.5 0-3-1.69-3-3.5S2.55 3 4 3h4c1.45 0 3 1.69 3 3.5 0 1.41-.91 2.72-2 3.25V8.59c.58-.45 1-1.27 1-2.09C10 5.22 8.98 4 8 4H4c-.98 0-2 1.22-2 2.5S3 9 4 9zm9-3h-1v1h1c1 0 2 1.22 2 2.5S13.98 12 13 12H9c-.98 0-2-1.22-2-2.5 0-.83.42-1.64 1-2.09V6.25c-1.09.53-2 1.84-2 3.25C6 11.31 7.55 13 9 13h4c1.45 0 3-1.69 3-3.5S14.5 6 13 6z"></path></svg></a>Experimental things</h2>
<p>In the <code>cheshire.experimental</code> namespace:</p>
<pre><code>$ echo "Hi. \"THIS\" is a string.\\yep." &gt; /tmp/foo

$ lein repl
user&gt; (use 'cheshire.experimental)
nil
user&gt; (use 'clojure.java.io)
nil
user&gt; (println (slurp (encode-large-field-in-map {:id "10"
                                                  :things [1 2 3]
                                                  :body "I'll be removed"}
                                                 :body
                                                 (input-stream (file "/tmp/foo")))))
{"things":[1,2,3],"id":"10","body":"Hi. \"THIS\" is a string.\\yep.\n"}
nil
</code></pre>
<p><code>encode-large-field-in-map</code> is used for streamy JSON encoding where
you want to JSON encode a map, but don't want the map in memory all at
once (it returns a stream). Check out the docstring for full usage.</p>
<p>It's experimental, like the name says. Based on <a href="http://github.com/dakrone/tigris">Tigris</a>.</p>
<h2><a id="user-content-advanced-customization-for-factories" class="anchor" href="#advanced-customization-for-factories" aria-hidden="true"><svg aria-hidden="true" class="octicon octicon-link" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M4 9h1v1H4c-1.5 0-3-1.69-3-3.5S2.55 3 4 3h4c1.45 0 3 1.69 3 3.5 0 1.41-.91 2.72-2 3.25V8.59c.58-.45 1-1.27 1-2.09C10 5.22 8.98 4 8 4H4c-.98 0-2 1.22-2 2.5S3 9 4 9zm9-3h-1v1h1c1 0 2 1.22 2 2.5S13.98 12 13 12H9c-.98 0-2-1.22-2-2.5 0-.83.42-1.64 1-2.09V6.25c-1.09.53-2 1.84-2 3.25C6 11.31 7.55 13 9 13h4c1.45 0 3-1.69 3-3.5S14.5 6 13 6z"></path></svg></a>Advanced customization for factories</h2>
<p>See
<a href="http://fasterxml.github.com/jackson-core/javadoc/2.1.1/com/fasterxml/jackson/core/JsonFactory.Feature.html">this</a>
and
<a href="http://fasterxml.github.com/jackson-core/javadoc/2.1.1/com/fasterxml/jackson/core/JsonParser.Feature.html">this</a>
for a list of features that can be customized if desired. A custom
factory can be used like so:</p>
<div class="highlight highlight-source-clojure"><pre>(<span class="pl-k">ns</span> <span class="pl-e">myns</span>
  (<span class="pl-c1">:require</span> [cheshire.core <span class="pl-c1">:as</span> core]
            [cheshire.factory <span class="pl-c1">:as</span> factory]))

(<span class="pl-k">binding</span> [factory/*json-factory* (<span class="pl-en">factory/make-json-factory</span>
                                  {<span class="pl-c1">:allow-non-numeric-numbers</span> <span class="pl-c1">true</span>})]
  (<span class="pl-en">json/decode</span> <span class="pl-s"><span class="pl-pds">"</span>{<span class="pl-cce">\"</span>foo<span class="pl-cce">\"</span>:NaN}<span class="pl-pds">"</span></span> <span class="pl-c1">true</span>))))))</pre></div>
<p>See the <code>default-factory-options</code> map in
<a href="https://github.com/dakrone/cheshire/blob/master/src/cheshire/factory.clj">factory.clj</a>
for a full list of configurable options. Smile factories can also be
created, and factories work exactly the same with custom encoding.</p>
<h2><a id="user-content-future-ideastodos" class="anchor" href="#future-ideastodos" aria-hidden="true"><svg aria-hidden="true" class="octicon octicon-link" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M4 9h1v1H4c-1.5 0-3-1.69-3-3.5S2.55 3 4 3h4c1.45 0 3 1.69 3 3.5 0 1.41-.91 2.72-2 3.25V8.59c.58-.45 1-1.27 1-2.09C10 5.22 8.98 4 8 4H4c-.98 0-2 1.22-2 2.5S3 9 4 9zm9-3h-1v1h1c1 0 2 1.22 2 2.5S13.98 12 13 12H9c-.98 0-2-1.22-2-2.5 0-.83.42-1.64 1-2.09V6.25c-1.09.53-2 1.84-2 3.25C6 11.31 7.55 13 9 13h4c1.45 0 3-1.69 3-3.5S14.5 6 13 6z"></path></svg></a>Future Ideas/TODOs</h2>
<ul>
<li><del>move away from using Java entirely, use Protocols for the
custom encoder</del> (see custom.clj)</li>
<li><del>allow custom encoders</del> (see custom.clj)</li>
<li><del>figure out a way to encode namespace-qualified keywords</del></li>
<li><del>look into overriding the default encoding handlers with custom handlers</del></li>
<li><del>better handling when java numbers overflow ECMAScript's numbers
(-2^31 to (2^31 - 1))</del></li>
<li><del>handle encoding java.sql.Timestamp the same as
java.util.Date</del></li>
<li><del>add benchmarking</del></li>
<li>get criterium benchmarking ignored for 1.2.1 profile</li>
<li><del> look into faster exception handling by pre-allocating an exception
object instead of creating one on-the-fly (maybe ask Steve?)</del></li>
<li>make it as fast as possible (ongoing)</li>
</ul>
<h2><a id="user-content-license" class="anchor" href="#license" aria-hidden="true"><svg aria-hidden="true" class="octicon octicon-link" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M4 9h1v1H4c-1.5 0-3-1.69-3-3.5S2.55 3 4 3h4c1.45 0 3 1.69 3 3.5 0 1.41-.91 2.72-2 3.25V8.59c.58-.45 1-1.27 1-2.09C10 5.22 8.98 4 8 4H4c-.98 0-2 1.22-2 2.5S3 9 4 9zm9-3h-1v1h1c1 0 2 1.22 2 2.5S13.98 12 13 12H9c-.98 0-2-1.22-2-2.5 0-.83.42-1.64 1-2.09V6.25c-1.09.53-2 1.84-2 3.25C6 11.31 7.55 13 9 13h4c1.45 0 3-1.69 3-3.5S14.5 6 13 6z"></path></svg></a>License</h2>
<p>Release under the MIT license. See LICENSE for the full license.</p>
<h2><a id="user-content-thanks" class="anchor" href="#thanks" aria-hidden="true"><svg aria-hidden="true" class="octicon octicon-link" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M4 9h1v1H4c-1.5 0-3-1.69-3-3.5S2.55 3 4 3h4c1.45 0 3 1.69 3 3.5 0 1.41-.91 2.72-2 3.25V8.59c.58-.45 1-1.27 1-2.09C10 5.22 8.98 4 8 4H4c-.98 0-2 1.22-2 2.5S3 9 4 9zm9-3h-1v1h1c1 0 2 1.22 2 2.5S13.98 12 13 12H9c-.98 0-2-1.22-2-2.5 0-.83.42-1.64 1-2.09V6.25c-1.09.53-2 1.84-2 3.25C6 11.31 7.55 13 9 13h4c1.45 0 3-1.69 3-3.5S14.5 6 13 6z"></path></svg></a>Thanks</h2>
<p>Thanks go to Mark McGranaghan for clj-json and Jim Duey for the name
suggestion. :)</p>
</article>
  </div>

</div>

<button type="button" data-facebox="#jump-to-line" data-facebox-class="linejump" data-hotkey="l" class="d-none">Jump to Line</button>
<div id="jump-to-line" style="display:none">
  <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="" class="js-jump-to-line-form" method="get"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /></div>
    <input class="form-control linejump-input js-jump-to-line-field" type="text" placeholder="Jump to line&hellip;" aria-label="Jump to line" autofocus>
    <button type="submit" class="btn">Go</button>
</form></div>


  </div>
  <div class="modal-backdrop js-touch-events"></div>
</div>

    </div>
  </div>

  </div>

      <div class="container site-footer-container">
  <div class="site-footer" role="contentinfo">
    <ul class="site-footer-links float-right">
        <li><a href="https://github.com/contact" data-ga-click="Footer, go to contact, text:contact">Contact GitHub</a></li>
      <li><a href="https://developer.github.com" data-ga-click="Footer, go to api, text:api">API</a></li>
      <li><a href="https://training.github.com" data-ga-click="Footer, go to training, text:training">Training</a></li>
      <li><a href="https://shop.github.com" data-ga-click="Footer, go to shop, text:shop">Shop</a></li>
        <li><a href="https://github.com/blog" data-ga-click="Footer, go to blog, text:blog">Blog</a></li>
        <li><a href="https://github.com/about" data-ga-click="Footer, go to about, text:about">About</a></li>

    </ul>

    <a href="https://github.com" aria-label="Homepage" class="site-footer-mark" title="GitHub">
      <svg aria-hidden="true" class="octicon octicon-mark-github" height="24" version="1.1" viewBox="0 0 16 16" width="24"><path fill-rule="evenodd" d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0 0 16 8c0-4.42-3.58-8-8-8z"/></svg>
</a>
    <ul class="site-footer-links">
      <li>&copy; 2017 <span title="0.14889s from github-fe-651e69d.cp1-iad.github.net">GitHub</span>, Inc.</li>
        <li><a href="https://github.com/site/terms" data-ga-click="Footer, go to terms, text:terms">Terms</a></li>
        <li><a href="https://github.com/site/privacy" data-ga-click="Footer, go to privacy, text:privacy">Privacy</a></li>
        <li><a href="https://github.com/security" data-ga-click="Footer, go to security, text:security">Security</a></li>
        <li><a href="https://status.github.com/" data-ga-click="Footer, go to status, text:status">Status</a></li>
        <li><a href="https://help.github.com" data-ga-click="Footer, go to help, text:help">Help</a></li>
    </ul>
  </div>
</div>



  

  <div id="ajax-error-message" class="ajax-error-message flash flash-error">
    <svg aria-hidden="true" class="octicon octicon-alert" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M8.865 1.52c-.18-.31-.51-.5-.87-.5s-.69.19-.87.5L.275 13.5c-.18.31-.18.69 0 1 .19.31.52.5.87.5h13.7c.36 0 .69-.19.86-.5.17-.31.18-.69.01-1L8.865 1.52zM8.995 13h-2v-2h2v2zm0-3h-2V6h2v4z"/></svg>
    <button type="button" class="flash-close js-flash-close js-ajax-error-dismiss" aria-label="Dismiss error">
      <svg aria-hidden="true" class="octicon octicon-x" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48z"/></svg>
    </button>
    You can't perform that action at this time.
  </div>


    <script crossorigin="anonymous" integrity="sha256-ikMY/+oJoM24IUt2zykmufagztMYoxe+1BnbGSFMaQ0=" src="https://assets-cdn.github.com/assets/compat-8a4318ffea09a0cdb8214b76cf2926b9f6a0ced318a317bed419db19214c690d.js"></script>
    <script crossorigin="anonymous" integrity="sha256-bRCeda2EcbpBUIJybADDX7kpzquXUIJJKDXxHsqMB9k=" src="https://assets-cdn.github.com/assets/frameworks-6d109e75ad8471ba415082726c00c35fb929ceab975082492835f11eca8c07d9.js"></script>
    <script async="async" crossorigin="anonymous" integrity="sha256-G2VYh9uVMRRonYsfusKLcIUSSvTt3Gxd6vHxw8RJd90=" src="https://assets-cdn.github.com/assets/github-1b655887db953114689d8b1fbac28b7085124af4eddc6c5deaf1f1c3c44977dd.js"></script>
    
    
    
    
  <div class="js-stale-session-flash stale-session-flash flash flash-warn flash-banner d-none">
    <svg aria-hidden="true" class="octicon octicon-alert" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M8.865 1.52c-.18-.31-.51-.5-.87-.5s-.69.19-.87.5L.275 13.5c-.18.31-.18.69 0 1 .19.31.52.5.87.5h13.7c.36 0 .69-.19.86-.5.17-.31.18-.69.01-1L8.865 1.52zM8.995 13h-2v-2h2v2zm0-3h-2V6h2v4z"/></svg>
    <span class="signed-in-tab-flash">You signed in with another tab or window. <a href="">Reload</a> to refresh your session.</span>
    <span class="signed-out-tab-flash">You signed out in another tab or window. <a href="">Reload</a> to refresh your session.</span>
  </div>
  <div class="facebox" id="facebox" style="display:none;">
  <div class="facebox-popup">
    <div class="facebox-content" role="dialog" aria-labelledby="facebox-header" aria-describedby="facebox-description">
    </div>
    <button type="button" class="facebox-close js-facebox-close" aria-label="Close modal">
      <svg aria-hidden="true" class="octicon octicon-x" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48z"/></svg>
    </button>
  </div>
</div>


  </body>
</html>

